#include<iostream>
using namespace std;

class Employee{
	
	private:
		int empId, sal;
		
	public:
		void printEmployee()
		{
			cout<<"Employee is"<<" "<<empId<<" "<<sal<<endl;
		}
		void assignEmployee()
		{
			empId=12345;
			sal=50000;
		
		}
		void assignEmployee(int e,int s)
		{
			empId=e;
			sal=s;
		}
		
		};
int main()
		{
		Employee e1,e2;
		e1.assignEmployee();
		e1.printEmployee();
		
	e2.assignEmployee(12345,50000);
	e2.printEmployee();
	
		return 0;
	}
		


