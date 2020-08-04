/*
C++ program to overload `+` operator to concatenate two strings
*/

#include <iostream>
class String {
    std::string s1;

   public:
    String(std::string temp) {
        // Parameterized constructor
        s1 = temp;
    }
    String(const String &s) {
        // Copy constructor
        s1 = s.s1;
    }
    std::string operator+(const String &s) {
        // + operator for String obj
        return s1 + " " + s.s1;
    }
    std::string operator+(const std::string &s) {
        // + operator for standard string
        return s1 + " " + s;
    }
    void print() {
        // Print string
        std::cout << "Resulting word: " << s1 << std::endl;
    }
};
int main() {
    std::string temp;
    // First string
    std::cout << "Enter a word: ";
    std::cin >> temp;
    String s1(temp);
    // Seconf string
    std::cout << "Enter another word: ";
    std::cin >> temp;
    String s2(temp);
    // Concatenate strings
    String result = s1 + s2;
    // Print the string
    result.print();
}