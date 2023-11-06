#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>

using namespace std;

// Define a structure to store treatment history
struct Treatment {
    int treatmentNumber;
    string date;
    string procedure;
    double cost;
};

// Define a structure to store patient information
struct Patient {
    int id;
    string firstName;
    string lastName;
    Treatment treatments[100]; // An array to store treatment history for a patient
    int treatmentCount;
};

struct TreatmentDetail {
    int treatmentNumber;
    string procedure;
    double cost;
};

// Create an array to store the treatment details
TreatmentDetail treatmentDetails[5];

// Fill in the treatment details
void initializeTreatmentDetails() {
    treatmentDetails[0] = { 1, "ขูดหินปูน", 200.00 };
    treatmentDetails[1] = { 2, "ถอนฟัน", 500.00 };
    treatmentDetails[2] = { 3, "รักษารากฟัน", 25000.00 };
    treatmentDetails[3] = { 4, "พิมพ์ฟัน", 1000.00 };
    treatmentDetails[4] = { 5, "เอกเซรย์ฟัน", 500.00 };
}

void registerPatient(Patient patients[], int& patientCount) {
    if (patientCount < 100) {
        patients[patientCount].id = 66000 + patientCount;
        cout << "First Name: ";
        cin >> patients[patientCount].firstName;
        cout << "Last Name: ";
        cin >> patients[patientCount].lastName;
        patients[patientCount].treatmentCount = 0;
        patientCount++;
        cout << "Registered successfully " << patients[patientCount - 1].id << " " << patients[patientCount - 1].firstName << " " << patients[patientCount - 1].lastName << "!!" << std::endl;
    }
    else {
        cout << "Sorry, the system is full. Cannot register a new patient." << std::endl;
    }
}

void displayTreatmentSummary(Patient patient) {
    cout << "-------------------------------------------------------" << endl;
    cout << "|       สรุปการรักษาของ " << patient.firstName << " " << patient.lastName << "               |" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "| ครั้งที่      |   DATE        |   ทำรายการ    |  ราคา(บาท)|" << endl;
    cout << "-------------------------------------------------------" << endl;

    for (int i = 0; i < patient.treatmentCount; i++) {
        cout << "|   " << patient.treatments[i].treatmentNumber << "              |  " << patient.treatments[i].date << "      |   "
            << patient.treatments[i].procedure << "     |  " << fixed << setprecision(2) << patient.treatments[i].cost << "  |" << endl;
    }

    cout << "=======================================================" << endl;
}

int main() {
    Patient patients[100];
    int patientCount = 0;
    int choice;

    initializeTreatmentDetails(); // Initialize treatment details

    do {
        cout << setfill('=') << setw(30) << "" << endl;
        cout << "  Clinic Smilelyyy Yimsuyyy  " << endl;
        cout << "        ยินดีต้อนรับ " << endl;
        cout << setfill('-') << setw(30) << "" << endl;
        cout << "           MENU          " << endl;
        cout << setfill('-') << setw(30) << "" << endl;
        cout << setfill('=') << setw(30) << "" << endl;
        cout << "1. Register Patient" << endl;
        cout << "2. Enter Treatment Data" << endl;
        cout << "3. Display Treatment Summary" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Menu: ";
        cin >> choice;

        switch (choice) {
        case 1:
            registerPatient(patients, patientCount);
            break;
        case 2:
            enterTreatmentDetail(patients, patientCount);
            break;
        case 3:
            int patientId;
            cout << "Enter Patient ID: ";
            cin >> patientId;
            bool found = false;

            for (int i = 0; i < patientCount; i++) {
                if (patients[i].id == patientId) {
                    displayTreatmentSummary(patients[i]);
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Patient with ID " << patientId << " not found." << endl;
            }
            break;
        case 4:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
