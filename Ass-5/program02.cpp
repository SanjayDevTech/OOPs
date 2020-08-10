#include <iostream>
class Fruits {
   protected:
    static int num;

   public:
    void display() {
        std::cout << "Number of fruits in the basket => " << num << std::endl;
    }
};
int Fruits::num = 0;
class Apples : public Fruits {
   public:
    void get() {
        int a;
        std::cout << "Number of Apples => ";
        std::cin >> a;
        num += a;
    }
};
class Mangoes : public Fruits {
   public:
    void get() {
        int a;
        std::cout << "Number of Mangoes => ";
        std::cin >> a;
        num += a;
    }
};
int main() {
    Fruits fruit;
    Apples apple;
    Mangoes mango;
    apple.get();
    mango.get();
    fruit.display();
}