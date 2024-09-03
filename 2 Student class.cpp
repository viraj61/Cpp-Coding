#include<iostream>
using namespace std;

class Student{
	
	private:
		int rollNo, age;
		long long int phone;
		
	public:
		void printStudent(){
			
			cout<<"Student Info is"<<" "<<rollNo<<" "<<age<<" "<<phone<<endl;
		}
		
		void assignStudent1(){
			
			rollNo=1;
			age=24;
			phone=915678990;
			
		
		}
		
		void assignStudent(int r, int a, long long int p){
			
			rollNo=r;
			age=a;
			phone=p;
		}
};

int main(){
	
	Student s1,s2;
	s1.assignStudent1();
	s1.printStudent();
	
	s2.assignStudent(2,23,1234567890);
	s2.printStudent();
	
	return 0;

	}
