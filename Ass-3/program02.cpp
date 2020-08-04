/*
C++ program to create class called Student.
Create a friend function aclled display to display the student details
*/

#include <iostream>
class Human {
   private:
    std::string name;
    int age;

   public:
    void setDetails(std::string s, int i) {
        name = s;
        age = i;
    }
    std::string getName() { return name; }
    friend int getAge(Human);
};
int getAge(Human h) { return h.age; }
int main() {
    Human h1;
    int age;
    std::cout << "Enter your name and age" << std::endl;
    std::string name;
    std::cin >> name >> age;
    h1.setDetails(name, age);
    std::cout << "Name: " << h1.getName() << std::endl;
    std::cout << "Age: " << getAge(h1) << std::endl;
    return 0;
}