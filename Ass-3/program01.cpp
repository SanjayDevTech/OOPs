/*
C++ program using inline functions for finding minimum and maximum of two
elements
*/

#include <iostream>

inline int max(int a, int b) { return a > b ? a : b; }

inline int min(int a, int b) { return a < b ? a : b; }

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Max: " << max(a, b) << std::endl;
    std::cout << "Min: " << min(a, b) << std::endl;
    return 0;
}