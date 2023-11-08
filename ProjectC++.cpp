#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Treatment {
    int treatmentNumber;
    string date;
    string procedure;
    double cost;
};

struct Patient {
    int id;
    string firstName;
    string lastName;
    Treatment treatments[100];
    int treatmentCount;
    
};

struct TreatmentDetail {
    int treatmentNumber;
    string procedure;
    double cost;
};

TreatmentDetail treatmentDetails[5];


void initializeTreatmentDetails() {
    treatmentDetails[0] = { 1, "Scaling", 200.00 }; //ขูดหินปูน
    treatmentDetails[1] = { 2, "Tooth Extraction", 500.00 }; //ถอนฟัน
    treatmentDetails[2] = { 3, "Root Canal Treatment", 25000.00 }; //รักษารากฟัน
    treatmentDetails[3] = { 4, "Dental Crown", 1000.00 }; //พิมพ์ฟัน
    treatmentDetails[4] = { 5, "X-ray Tooth", 500.00 }; //เอกเซรย์ฟัน
}

void registerPatient(Patient patients[], int& patientCount) {
    if (patientCount < 100) {
        patients[patientCount].id = 66000 + patientCount;
        cout << "Name: ";
        cin >> patients[patientCount].firstName;
        cout << "LastName: ";
        cin >> patients[patientCount].lastName;
        patients[patientCount].treatmentCount = 0;
        patientCount++;
        cout << "Registered successfully " << patients[patientCount - 1].id << " " << patients[patientCount - 1].firstName << " " << patients[patientCount - 1].lastName << "!!" << endl;
    }
    else {
        cout << "Sorry, the system is full. Cannot register a new patient." << endl;
    }
}

void enterTreatmentData(Patient patients[], int patientCount) {
    int patientId;
    cout << "Enter ID: ";
    cin >> patientId;
    bool found = false;

    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == patientId) {
            found = true;
            cout << patients[i].firstName << " " << patients[i].lastName << " There is data in the system." << endl;
        }
    }


    if (!found) {
        cout << "Patient with ID " << patientId << " not found." << endl;
    }
}

void enterTreatmentDetail(Patient patients[], int patientCount) {
    int patientId;
    cout << "Enter ID: ";
    cin >> patientId;
    cout << endl;
    bool found = false;

    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == patientId) {
            cout << "--------------------------------------------------------------------------" << endl;
            cout << "|                 THE TREATMENT HISTORY OF " << patients[i].firstName << " " << patients[i].lastName << "               |" << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            cout << "|       NO.      |    DATE      |       MAKE A LIST       |  PRICE(BATH) |" << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            for (int j = 0; j < patients[i].treatmentCount; j++) {
                cout << "|       " << left << setfill(' ') << setw(8) << patients[i].treatments[j].treatmentNumber;
                cout << " |   " << left << setfill(' ') << setw(10) << patients[i].treatments[j].date;
                cout << " |    " << left << setfill(' ') << setw(20) << patients[i].treatments[j].procedure;
                cout << " | " << fixed << setprecision(2) << setfill(' ') << setw(10) << right << patients[i].treatments[j].cost << "   |" << endl;
            }

            cout << "--------------------------------------------------------------------------" << endl;
            cout << endl;

            if (patients[i].treatmentCount < 100) {
                Treatment newTreatment;
                patients[i].treatments[patients[i].treatmentCount] = newTreatment;
            }

            int selectedService;
            double totalCost = 0.0;
            

            cout << "Date (dd/mm/yy): ";
            cin >> patients[i].treatments[patients[i].treatmentCount].date;  // Ask for date for each treatment
            cout << endl;
            cout << "DENTAL ITEMS" << endl;
            for (int k = 0; k < 5; k++) {
                cout << k + 1 << ". " << treatmentDetails[k].procedure << " " << treatmentDetails[k].cost << " BATH " << endl;
            }


            do {
                cout << "Service (0 to finish) : ";
                cin >> selectedService;

                if (selectedService >= 1 && selectedService <= 5) {
                    patients[i].treatments[patients[i].treatmentCount].treatmentNumber = patients[i].treatmentCount + 1;
                    patients[i].treatments[patients[i].treatmentCount].procedure = treatmentDetails[selectedService - 1].procedure;
                    patients[i].treatments[patients[i].treatmentCount].cost = treatmentDetails[selectedService - 1].cost;



                    patients[i].treatmentCount++;
                    totalCost += treatmentDetails[selectedService - 1].cost;
                }
            } while (selectedService != 0);

            cout << "TOTAL : " << totalCost << " BATH " << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Patient with ID " << patientId << " not found." << endl;
    }
}



void enterTreatmentReport(Patient patients[], int patientCount) {
    double totalRevence = 0.0;

    for (int i = 0; i < patientCount; i++) {
        double patientTotalCost = 0.0;

            cout << "Patient ID : " << patients[i].id << endl;
           
            cout << "--------------------------------------------------------------------------" << endl;
            cout << "|                 THE TREATMENT HISTORY OF " << patients[i].firstName << " " << patients[i].lastName << "               |" << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            cout << "|       NO.      |    DATE      |       MAKE A LIST       |  PRICE(BATH) |" << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            for (int j = 0; j < patients[i].treatmentCount; j++) {
                cout << "|       " << left << setfill(' ') << setw(8) << patients[i].treatments[j].treatmentNumber;
                cout << " |   " << left << setfill(' ') << setw(10) << patients[i].treatments[j].date;
                cout << " |    " << left << setfill(' ') << setw(20) << patients[i].treatments[j].procedure;
                cout << " | " << fixed << setprecision(2) << setfill(' ') << setw(10) << right << patients[i].treatments[j].cost << "   |" << endl;
                patientTotalCost += patients[i].treatments[j].cost;
                cout << endl;
                
            }

            cout << "--------------------------------------------------------------------------" << endl;
            cout << "| TOTAL :                                    " << fixed << setprecision(2) << setfill(' ') << setw(25) << patientTotalCost  << "   |" << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            cout << endl;
            totalRevence += patientTotalCost;
        }
        cout << endl;
    }

    

int main() {
    Patient patients[100];
    int patientCount = 0;
    int choice;
    int choose;

    initializeTreatmentDetails();

    do {
        cout << "<<<<<<<<<<<>>>>>>>>>>>>>" << endl;
        cout << "<   Clinic Smilelyyy   >" << endl;
        cout << "<        Welcome       >" << endl;
        cout << "<---------------------->" << endl;
        cout << "<         MENU         >" << endl;
        cout << "<<<<<<<<<<<>>>>>>>>>>>>>" << endl;
        cout << endl;
        cout << "1. Check history" << endl;
        cout << "2. Treatment data" << endl;
        cout << "3. Report" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Menu: ";
        cin >> choice;

        switch (choice) {
        case 1:
            do {
                cout << endl;
                cout << "<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>" << endl;
                cout << "<	1.Check history         >" << endl;
                cout << "<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>" << endl;
                cout << endl;
                cout << "1. Register" << endl;
                cout << "2. Enter ID" << endl;
                cout << "0. Exit" << endl;
                cout << "Choose: ";
                cin >> choose;

                switch (choose) {
                case 1:
                    registerPatient(patients, patientCount);
                    break;

                case 2:
                    enterTreatmentData(patients, patientCount);
                    break;

                case 0:

                    break;

                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
                }

            } while (choose != 0);
            break;

        case 2:
            cout << endl;
            cout << "<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>" << endl;
            cout << "<	2.Treatment data        >" << endl;
            cout << "<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>" << endl;
            cout << endl;
            enterTreatmentDetail(patients, patientCount);
            cout << endl;
            break;

        case 3:
            cout << endl;
            cout << "<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>" << endl;
            cout << "<	     3.Report           >" << endl;
            cout << "<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>" << endl;
            cout << endl;
            enterTreatmentReport(patients, patientCount);
            cout << endl;
            break;

        case 4:
            cout << "Exit Program." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

    } while (choice != 4);

    return 0;
}
