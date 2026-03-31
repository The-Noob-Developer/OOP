// Add 2 Complex Numbers using Operator Overloading
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    
    // Complex(int r, int i) :
    // real(r), imag(i) {}

    // Default Constructor
    Complex(){
        real = 0;
        imag = 0;
    }

    // Parameterised Constructor
    Complex(int r , int i){
        real = r;
        imag = i;
    }



    // Overloading the '+' operator

    Complex operator +(Complex obj){
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};

int main() {
    // Complex c1;

    Complex c1(10, 5), c2(2, 4);
    
    // Adding c1 and c2 using + operator
    Complex c3 = c1 + c2;  
    cout << c3.real << " + i" << c3.imag << endl;
    return 0;

    

    // Primitive - +-/*
    // User Defined - Class
}