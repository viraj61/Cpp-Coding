/*2:Create Employee class with members id(int),name(string),dob(Date).Use above created Date class.
Write default and parameterised constructor in Employee Class.Write accept() function to accept information and display() to display emp information.*/

#include <iostream>
#include <string>

using namespace std;

class Employee
 {
private:
    int id;
    string name;
    string dob; 

public:
    
    Employee(int id, string name, string dob) 
	{
        this->id = id;
        this->name = name;
        this->dob = dob;
    }

    
    Employee() 
	{
        id = 0;
        name = "Unknown";
        dob = "00/00/0000";
    }

    
    void display()
	 {
        cout << "Employee id: " << id << "\n" << "Name: " << name << "\n" << "DOB: " << dob << endl;
    }
};

int main()
 {
    
    Employee obj1;
    obj1.display();

    
    Employee obj2(2535, "Viraj", "30/10/2000");
    obj2.display();
    
    Employee obj3(6145, "Punam", "10/01/2001");
    obj3.display(); 

    Employee* doj = new Employee(2556, "Rohan", "05/05/1995");
    doj->display();
    delete doj; 

    return 0;
}

