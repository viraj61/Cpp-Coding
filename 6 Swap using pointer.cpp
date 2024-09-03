#include<iostream>
using namespace std;

int swapNum(int *a, int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
	cout<<"After Swapping Value of a="<<" "<<*a<<"\nValue of b="<<*b<<endl;
}

int main(){
	
	int x=5;
	int y=10;
	cout<<"Before Swapping Value of a="<<x<<" \nValue of b="<<y<<endl;
	
	swapNum(&x,&y);
	
	return 0;
}
