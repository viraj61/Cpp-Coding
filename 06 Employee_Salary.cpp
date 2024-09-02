#include <iostream>
using namespace std;

int main() {
    double basicSalary, incomeTax;

    cout << "Enter the annual basic salary: ";
    cin >> basicSalary;

    if (basicSalary < 150000) {
        incomeTax = 0;
    } else if (basicSalary <= 300000) {
        incomeTax = (basicSalary - 150000) * 0.20;
    } else {
        incomeTax = (150000 * 0.20) + ((basicSalary - 300000) * 0.30);
    }

    cout << "The income tax to be paid is: " << incomeTax << endl;

    return 0;
}

