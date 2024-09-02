//17:Write a program to check entered number is Armstrong number or not.
#include<iostream>
using namespace std;

int main(){
    int num, originalNum, remainder, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;  
        sum += remainder * remainder * remainder;  
        originalNum /= 10;  
    }

    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}

