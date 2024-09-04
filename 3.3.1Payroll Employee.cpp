/*3:Consider that payroll software needs to be developed for computerization of
operations of an ABC organization. The organization has employees.
3.1. Construct a class Employee with following members using private access
specifies:
 Employee Id integer
 Employee Name string
 Basic Salary double
 HRA double
 Medical double=1000
 PF double
PT double
 Net Salary double
 Gross Salary double
Please use following expressions for calculations://Note:Don't accept HRA,PF PT from user
 * HRA = 50% of Basic Salary
* PF = 12% of Basic Salary
* PT = Rs. 200*/

#include<iostream>
using namespace std;
class Employee
{
	private:
		int emplId;
		string emplName;
		double salary;
		double hRA;
		double medical;
		double pF;
		double pT;
		double netSalary;
		double grossSalary;
		
	

public:
 Employee( int emplId, string "emplName", double salary, double hRa, double medical,double pF,double pT,double netSalary,double grossSalary)
	
{
	this->emplId=emplId;
	this->emplName=emplName
}
Employee()
{
	cout<<"Employee"<<empId<<"/n"<<emplName<<endl;
}};
int main()
{
	employee obj1;
	obj1.display();
	
	employee obj2;
	obj2.display(2536,"Viraj");
	
	employee obj3;
	obj3.display(28936,"Pooja");
	
	Employee* doj=new employee(2569,"Sachin");
	
	doj->display();
	delete doj;
	
	
	
	
	
}





