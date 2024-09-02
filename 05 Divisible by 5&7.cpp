//5. Write a program to accept a number and check if it is divisible by 5 and 7.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number";
	cin>>num;
	if(num%5==0 && num%7==0)
	{
	
	cout<<"It is divisible by 5&7"<<endl;
}
else
{
	cout<<"It is not divisible by 5 & 7"<<endl;
}
	
	return 0;
	
	
}
