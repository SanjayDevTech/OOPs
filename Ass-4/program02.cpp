/*
C++ program to find the subtraction and multiplication of two complex numbers using operator overloading
*/

#include <iostream>
class Complex {
    double real, imag;

   public:
    Complex(double r, double i) {
        // Parameterized constructor
        real = r;
        imag = i;
    }
    Complex(const Complex &temp) {
        // Copy constructor
        real = temp.real;
        imag = temp.imag;
    }
    Complex operator-(const Complex &c) {
        // Subtraction operator
        double d_real, d_imag;
        d_real = real - c.real;
        d_imag = imag - c.imag;
        Complex temp(d_real, d_imag);
        return temp;
    }
    Complex operator*(Complex &c) {
        // Multiplication operator
        double d_real, d_imag;
        d_real = (real * c.real) - (imag * c.imag);
        d_imag = (real * c.imag) + (imag * c.real);
        Complex temp(d_real, d_imag);
        return temp;
    }
    friend void print(const Complex);  // Friend function to print
};
void print(const Complex c) {
    // Log to console in a  (a + i b) format
    std::cout << c.real << " + i " << c.imag << std::endl;
}
int main() {
    double d1, d2;
    // First complex number
    std::cout << "Enter the complex number: ";
    std::cin >> d1 >> d2;
    Complex c1(d1, d2);
    // Second complex number
    std::cout << "Enter the another complex number: ";
    std::cin >> d1 >> d2;
    Complex c2(d1, d2);
    // Subtraction of complex
    Complex sub = c1 - c2;
    // Multiplication of complex
    Complex mul = c1 * c2;
    // Printing the result
    std::cout << "Subtraction => ";
    print(sub);
    std::cout << "Multiplication => ";
    print(mul);
}