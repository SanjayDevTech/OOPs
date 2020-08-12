#include <iostream>
class Person {
   protected:
    std::string name;

   protected:
    Person() {}
    Person(std::string s) { name = s; }
};
class Employee : public Person {
   private:
    double salary;
    int yrs;
    std::string ins_num;

   public:
    Employee() {}
    Employee(std::string s, double d, int i, std::string s2) : Person(s) {
        yrs = i;
        salary = d;
        ins_num = s2;
    }
    void set(int num) {
        std::cout << "Employee " << num + 1 << " details" << std::endl;
        std::cout << "Name => ";
        std::cin >> name;
        std::cout << "Salary => ";
        std::cin >> salary;
        std::cout << "Years => ";
        std::cin >> yrs;
        std::cout << "Insurance Number => ";
        std::cin >> ins_num;
    }
    std::string get_name() { return name; }
    double get_salary() { return salary; }
    int get_yrs() { return yrs; }
    std::string get_ins_num() { return ins_num; }
};
void print(Employee e, int num) {
    std::cout << "Employee " << num + 1 << " details" << std::endl
              << "Name => " << e.get_name() << std::endl
              << "Salary => " << e.get_salary() << std::endl
              << "Years => " << e.get_yrs() << std::endl
              << "Insurance Number => " << e.get_ins_num() << std::endl;
}
int main() {
    int n;
    std::cout << "Number of employees: ";
    std::cin >> n;
    Employee employees[n];
    for (int i = 0; i < n; i++) {
        employees[i].set(i);
    }
    std::cout << "====== PRINTING ======" << std::endl;
    for(int i = 0; i < n; i++) {
        print(employees[i], i);
    }
}