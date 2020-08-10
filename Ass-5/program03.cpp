#include <iostream>
class Marks {
   private:
    int rollNo;
    std::string name;

   public:
    double mark;
    void getDetails(int i) {
        std::cout << "Name of student " << i + 1 << ": " << std::endl;
        std::cin >> name;
        rollNo = i + 1;
    }
    void calAvg(double p, double c, double m) { mark = (p + c + m) / 3; };
};
class Physics : public Marks {
   public:
    void getDetails(int i) {
        std::cout << "Physics mark of student " << i + 1 << ": ";
        std::cin >> mark;
    }
};
class Chemistry : public Marks {
   public:
    void getDetails(int i) {
        std::cout << "Chemistry mark of student " << i + 1 << ": ";
        std::cin >> mark;
    }
};
class Maths : public Marks {
   public:
    void getDetails(int i) {
        std::cout << "Maths mark of student " << i + 1 << ": ";
        std::cin >> mark;
    }
};
double avgSubject(Marks marks[], int N) {
    double avg = 0;
    for(int i = 0; i < N; i++) {
        avg += marks[i].mark;
    }
    avg = avg/N;
    return avg;
}
int main() {
    int N;
    std::cout << "Number of students: ";
    std::cin >> N;
    Physics phy[N];
    Chemistry chem[N];
    Maths math[N];
    Marks marks[N];
    for (int i = 0; i < N; i++) {
        marks[i].getDetails(i);
        phy[i].getDetails(i);
        chem[i].getDetails(i);
        math[i].getDetails(i);
        marks[i].calAvg(phy[i].mark, chem[i].mark, math[i].mark);
    }
    std::cout << std::endl << "============ PRINTING ============" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "Avg marks of student " << i+1 << ": " << marks[i].mark << std::endl;
    }
    std::cout << std::endl << "============ PRINTING ============" << std::endl;
    std::cout << "Total avg of Physics => " << avgSubject(phy, N) << std::endl;
    std::cout << "Total avg of Chemistry => " << avgSubject(chem, N) << std::endl;
    std::cout << "Total avg of Maths => " << avgSubject(math, N) << std::endl;
}