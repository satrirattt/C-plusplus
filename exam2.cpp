#include <iostream>
#include <iomanip>
using namespace std;
int numSalespeople;
float CalComm(int sale);
void DisplayComm(float com);
void DisplayComm(float comarr[], int numSalespeople);

int main() {
    char choice;
    int numSalespeople;
    float totalCommissions = 0.0;

    do {
        cout << "Would you like to see a salesperson's commission (Y/N): ";
        cin >> choice;

        if (toupper(choice) == 'N') {
            cout << "Total Commission for all salespeople: " << fixed << setprecision(2) << totalCommissions << endl;
            break;
        } else if (toupper(choice) == 'Y') {
            cout << "Enter the number of salespeople: ";
            cin >> numSalespeople;

            int sales[numSalespeople];
            float commissions[numSalespeople];

            for (int i = 0; i < numSalespeople; i++) {
                cout << "Enter sales amount for salesperson " << i + 1 << ": ";
                cin >> sales[i];
                cout << "The commission for this salesperson is " << fixed << setprecision(2) << CalComm(sales[i]) << endl;
                commissions[i] = CalComm(sales[i]);
                totalCommissions += commissions[i];
            }
            cout << "-----------------------------------------------------" << endl;
        } else {
            cout << "Invalid choice. Please enter Y or N." << endl;
        }
    } while (true);

    return 0;
}

float CalComm(int sale) {
    if (sale >= 0 && sale <= 5000)
        return 0;
    else if (sale >= 5001 && sale <= 12000)
        return sale * 0.03;
    else if (sale >= 12001 && sale <= 22000)
        return sale * 0.07;
    else
        return sale * 0.15;
}
