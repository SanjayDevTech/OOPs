/*
Polynomial addition in C++ program
*/

#include <iostream>
class Polynomial {
    double a, b, c;

   public:
    Polynomial() {}
    Polynomial(const Polynomial &poly) {
        a = poly.a;
        b = poly.b;
        c = poly.c;
    }
    Polynomial(double d1, double d2, double d3) {
        a = d1;
        b = d2;
        c = d3;
    }
    Polynomial operator+(const Polynomial &poly) {
        double temp1 = a + poly.a;
        double temp2 = b + poly.b;
        double temp3 = c + poly.c;
        Polynomial polynomial(temp1, temp2, temp3);
        return polynomial;
    }
    friend std::ostream &operator<<(std::ostream &out, const Polynomial &poly) {
        if (poly.a != 0) {
            out << poly.a << "x2";
        }
        if (poly.b != 0) {
            out << ((poly.b > 0) ? " + " : " ");
            out << poly.b << "x";
        }
        out << ((poly.c > 0) ? " + " : " ");
        out << poly.c;
        return out;
    }
};
int main() {
    Polynomial q1(3, 4, -2), q2(0, -4, 10);
    std::cout << "First Polynomial: " << q1 << std::endl;
    std::cout << "Second Polynomial: " << q2 << std::endl;
    Polynomial sum;
    sum = q1 + q2;
    std::cout << q1 << " : q1\n";
    std::cout << q2 << " : q2\n";
    std::cout << sum << " : q1 + q2\n";
}