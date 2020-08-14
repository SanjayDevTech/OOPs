#include <iostream>
class Student {
   public:
    virtual void get() = 0;
    virtual void display() = 0;
};
class Engineering : public Student {
   private:
    double mark;

   public:
    void get() {
        std::cout << "Enter your engineering mark: ";
        std::cin >> mark;
    }
    void display() { std::cout << "Engineering mark => " << mark << std::endl; }
};
class Medicine : public Student {
   private:
    double mark;

   public:
    void get() {
        std::cout << "Enter your medicine mark: ";
        std::cin >> mark;
    }
    void display() { std::cout << "Medicine mark => " << mark << std::endl; }
};
class Science : public Student {
   private:
    double mark;

   public:
    void get() {
        std::cout << "Enter your science mark: ";
        std::cin >> mark;
    }
    void display() {
        std::cout << "Science mark => " << mark << std::endl;
    }
};
int main() {
    Engineering eng;
    Medicine med;
    Science sci;
    eng.get();
    med.get();
    sci.get();
    Student* stu[3] = {&eng, &med, &sci};
    for (int i = 0; i < 3; i++) {
        stu[i]->display();
    }
}