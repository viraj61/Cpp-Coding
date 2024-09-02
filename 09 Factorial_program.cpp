//09 Write a program to find factorial of a given number. (fact=5*4*3*2*1=120)
#include <iostream>
using namespace std;

int main() {
    int num;
    unsigned long long factorial = 1; 

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        factorial *= i;  
    }

    cout << "Factorial of " << num << " = " << factorial << endl;

    return 0;
}

