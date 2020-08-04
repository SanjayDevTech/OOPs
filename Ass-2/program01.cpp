/*
C++ program to create class to get and print details of a student
*/

#include<iostream>
class Student {
	private:
		int rollNo;
		std::string name;
		double percent;
		
	public:
		void setDetails(int, std::string, double);
		void printDetails();
};

void Student::setDetails(int i, std::string n, double d) {
	rollNo = i;
	name = n;
	percent = d;
}

void Student::printDetails() {
	std::cout << "Roll no => "<< rollNo << std::endl;
	std::cout << "Name => " << name << std::endl;
	std::cout << "Percentage => " << percent << std::endl;
}

int main() {
	Student student;
	int rollNo;
	std::string name;
	double percent;
	std::cout << "Enter student rollno, name and percent" << std::endl;
	std::cin >> rollNo >> name >> percent;
	student.setDetails(rollNo, name, percent);
	student.printDetails();
	return 0;
}