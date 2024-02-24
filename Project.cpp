#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <iomanip>

using namespace std;

class customer {
public:
    string customername;
    string carmodel;
    string carnumber;
};

class rent : public customer {
public:
    int days;
    int rentalfee;

    void rentCar() {
        cout << "\t\t\t\tPlease Enter Your Name: ";
        cin >> customername;
        cout << endl;

        do {
            cout << "\t\t\t\tPlease Select a Car" << endl;
            cout << "\t\t\t\tEnter 'A' for Tesla 2011." << endl;
            cout << "\t\t\t\tEnter 'B' for Hyundai 2015." << endl;
            cout << "\t\t\t\tEnter 'C' for Ford 2017." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a car from the above options: ";
            cin >> carmodel;
            cout << endl;

            cout << "--------------------------------------------------------------------------------------------------" << endl;
            string carDescription;
            if (carmodel == "A") {
                carDescription = "Tesla model 2011";
                ifstream inA("a.txt");
                displayCarInfo(inA, carDescription);
            } else if (carmodel == "B") {
                carDescription = "Hyundai model 2015";
                ifstream inB("b.txt");
                displayCarInfo(inB, carDescription);
            } else if (carmodel == "C") {
                carDescription = "Ford model 2017";
                ifstream inC("c.txt");
                displayCarInfo(inC, carDescription);
            } else {
                cout << "Invalid choice. Please choose a valid car (A, B, or C)." << endl;
            }
        } while (carmodel != "A" && carmodel != "B" && carmodel != "C");

        // Now, you can add more logic for rental days and calculating rental fees.
        // For example:
        cout << "Enter the number of days for rental: ";
        cin >> days;

        // Calculate rental fee based on the selected car and rental days.
        if (carmodel == "A") {
            rentalfee = days * 100;  // Assuming $100 per day for Tesla.
        } else if (carmodel == "B") {
            rentalfee = days * 80;   // Assuming $80 per day for Hyundai.
        } else if (carmodel == "C") {
            rentalfee = days * 120;  // Assuming $120 per day for Ford.
        }

        cout << "Rental fee for " << carmodel << " (" << days << " days): $" << rentalfee << endl;
    }

    void displayCarInfo(ifstream& inFile, const string& carDescription) {
        if (inFile.is_open()) {
            string line;
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
            sleep(2);
            cout << "You have chosen " << carDescription << endl;
        } else {
            cout << "Error opening car information file." << endl;
        }
    }
};

int main() {
    rent rental;
    rental.rentCar();

    return 0;
}
