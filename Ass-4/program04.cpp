/*
C++ program to compare (< or >) two strings using operator overloading
*/

#include <iostream>
#include <string>
class String {
    std::string s1;

   public:
    String() {}  // Default constructor
    String(std::string temp) {
        // Parameterized constructor
        s1 = temp;
    }
    String(const String &s) {
        // Copy constructor
        s1 = s.s1;
    }
    void set(std::string &s) {
        // setter
        s1 = s;
    }
    bool operator<(const String &s) {
        // < operator overloading
        int len1 = s1.length();
        int len2 = s.s1.length();
        if (len1 < len2) {
            return true;
        } else {
            for (int i = 0; i < len1; i++) {
                if (s1[i] < s.s1[i]) {
                    return true;
                }
            }
            return false;
        }
    }
    bool operator>(const String &s) {
        // > operator overloading
        int len1 = s1.length();
        int len2 = s.s1.length();
        if (len1 > len2) {
            return true;
        } else {
            for (int i = 0; i < len1; i++) {
                if (s1[i] > s.s1[i]) {
                    return true;
                }
            }
            return false;
        }
    }
};
int main() {
    String string1, string2;
    std::string temp;
    std::cout << "Enter first string: ";
    std::cin >> temp;
    string1.set(temp);
    std::cout << "Enter second string: ";
    std::cin >> temp;
    string2.set(temp);
    if (string1 > string2) {
        std::cout << "First string is largest" << std::endl;
    } else if (string1 < string2) {
        std::cout << "Second string is largest" << std::endl;
    } else {
        std::cout << "Two strings are equal" << std::endl;
    }
}