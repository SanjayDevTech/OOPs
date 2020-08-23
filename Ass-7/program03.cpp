#include<iostream>
template<typename T>
class Calculator {
    private:
    T data;
    public:
    Calculator() : data(0) {}
    Calculator(const Calculator& copy) {
        // Copy constructor
        data = copy.data;
    }
    Calculator(T copy) {
        // parameterised constructor
        data = copy;
    }

    Calculator operator+(const Calculator& temp) {
        // + operator overloading
        return Calculator(data + temp.data);
    }

    Calculator operator-(const Calculator& temp) {
        // - operator overloading
        return Calculator(data - temp.data);
    }

    Calculator operator*(const Calculator& temp) {
        // * operator overloading
        return Calculator(data * temp.data);
    }

    Calculator operator/(const Calculator& temp) {
        // / operator overloading
        return Calculator(data / temp.data);
    }

    Calculator operator%(const Calculator& temp) {
        // % operator overloading
        return Calculator(data % temp.data);
    }
    friend std::ostream& operator<<(std::ostream& out, Calculator<T>& temp) {
        // << operator overloading
        out << temp.data;
        return out;
    }
    friend std::istream& operator>>(std::istream& in, Calculator<T>& temp) {
        // >> operator overloading
        in >> temp.data;
        return in;
    }
};
int main() {
    Calculator<int> a, b, res;
    char choice;
    std::cout << "A => ";
    std::cin >> a;
    std::cout << "B => ";
    std::cin >> b;
    std::cout << "Enter your operator(+ - * / %): ";
    std::cin >> choice;
    switch(choice) {
        case '+':
            res = a+b;
            break;

        case '-':
            res = a - b;
            break;

        case '*':
            res = a * b;
            break;

        case '/':
            res = a / b;
            break;

        case '%':
            res = a%b;
            break;

        default:
            std::cout << "Invalid operator\n";
            return 0;
    }
    std::cout << "Result => " << res << "\n";
}