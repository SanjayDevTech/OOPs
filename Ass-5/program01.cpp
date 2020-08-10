#include <iostream>
class Mammals {
   public:
    void sayMammal() { std::cout << "I am Mammal" << std::endl; }
};
class MarineAnimals {
   public:
    void sayMarine() { std::cout << "I am marine animal" << std::endl; }
};
class BlueWhale : public Mammals, public MarineAnimals {
   public:
    void sayWhale() {
        std::cout << "I belong to both categories:" << std::endl;
        std::cout << "Mammals as well as Marine Animals" << std::endl;
    }
};
int main() {
    Mammals a1;
    MarineAnimals a2;
    BlueWhale a3;
    a1.sayMammal();
    a2.sayMarine();
    a3.sayWhale();
    a3.sayMarine();
    a3.sayMammal();
}