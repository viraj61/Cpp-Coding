/*3:Create a class ComplexNumber with data members real, imaginary.  *create a methods for assigning values and displaying values
*write a method for retriving realNumber
ex. int getReal(){ return real;}
 write same method for getImaginary
*create an objct in main method and invoke all methods*/

#include <iostream>
using namespace std;


class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    void setValues(double r, double i) {
        real = r;
        imaginary = i;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    double getReal() {
        return real;
    }

    double getImaginary() {
        return imaginary;
    }
};

int main() {
    ComplexNumber num;

    
    num.setValues(4.5, 2.3);

    
    cout << "Complex Number: ";
    num.display();

    
    cout << "Real Part: " << num.getReal() << endl;
    cout << "Imaginary Part: " << num.getImaginary() << endl;

    return 0;
}

