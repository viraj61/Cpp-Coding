/*1:Create Date class with members day,month ,year.
Write no argument and parameterised constructor .Create two object s and initialize them using no argument and parameterised constructor
respectively.Print date using display function.*/

#include<iostream>
using namespace std;

class Date{
	
	int day;
	int month;
	 int year;
	
public: Date(){
	cout<<"Default Date"<<endl;
}

      Date(int day,int month,int year){
          cout<<"Parameter Date :"<<this<<endl;
          this->day=day;
      	this->month=month;
      	this->year=year;
	  }
     void display(){
     	cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
	 }
	
};

int main(){
	
	Date obj1;
	obj1.display();
	
	Date obj2(23,12,1990);
   obj2.display();
 
   Date obj3(3,10,2011);
   obj3.display();
   
   
   Date dob(11,11,2011);
   cout<<"dob object address:"<<&dob<<endl;
   
 
 Date *doj=new Date(3,3,2003);
 
 
 doj->display();
 delete doj;
 return 1;
}






