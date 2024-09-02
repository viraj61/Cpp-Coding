//15: Write a  program to enter a number and print its reverse
#include<iostream>
using namespace std;

int main() {
    int num, reverseNum = 0, remainder;
    cout << "Enter a number: ";
    cin >> num;
    int tempNum = num;
    while (tempNum != 0) 
	{
        remainder = tempNum % 10;  
        if (reverseNum == 0) 
		{
            reverseNum = remainder;  
        } else
	{
            reverseNum = reverseNum * 10 + remainder;  

        tempNum /= 10;  
    }

    cout << "The reverse of the number is: " << reverseNum << endl;

    return 0;
}
}
