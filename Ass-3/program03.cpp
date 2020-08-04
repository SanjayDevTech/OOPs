/*
C++ program using parameterised constructor for finding whether a number is prime or not
*/

#include <iostream>
class Number {
   private:
    int number;

   public:
    Number(int n) { number = n; }
    bool isPrime() {
        if (number < 2) {
            return false;
        }
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    Number num(number);
    if (num.isPrime()) {
        std::cout << "It is a prime number" << std::endl;
    } else {
        std::cout << "It is not a prime number" << std::endl;
    }
    return 0;
}