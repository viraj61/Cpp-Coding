#include<iostream>
using namespace std;

int acceptArray(int size, int arr[]){
	
	for(int i=0; i<size; i++){
		
		cout<<"Enter Array Element at Index: "<<i<<" ";
		cin>>arr[i];
	}
	
	for(int i=0; i<size;i++)
	{
		cout<<arr[i]<<endl;
		
	}
	
}

int main(){
	
	int i=5;
	int arr[5];
	
	acceptArray(i,arr);
	
	return 0;

}

Output:-




