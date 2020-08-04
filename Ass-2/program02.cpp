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

void Student::setDetails(int i,std::string n, double d) {
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
	int N;
	int rollNo;
	std::string name;
	double percent;
	std::cout << "Enter the total Students: ";
	std::cin >> N;
	Student student[N];
	for(int i = 0; i < N; i++) {
		std::cout << "Enter "<< i+1 <<" student rollno, name and percent" << std::endl;
		std::cin >> rollNo >> name >> percent;
		student[i].setDetails(rollNo, name, percent);
	}
	std::cout << "Printing..." << std::endl;
	for(int i = 0; i < N; i++) {
		std::cout << std::endl;
		student[i].printDetails();
	}
	return 0;
}