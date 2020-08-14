#include <iostream>
class Shape {
   public:
    virtual void draw() = 0;
};
class Circle : public Shape {
   public:
    void draw() { std::cout << "Draw a circle" << std::endl; }
};
class Square : public Shape {
   public:
    void draw() { std::cout << "Draw a square" << std::endl; }
};
class Triangle : public Shape {
   public:
    void draw() { std::cout << "Draw a triangle" << std::endl; }
};
int main() {
    int n;
    std::cout << "Enter the number of shapes: ";
    std::cin >> n;
    Shape* shapes[n];
    std::cout << "1 => Circle, 2 => Square, 3 => Triangle, any => Shape"
              << std::endl;
    for (int i = 0; i < n; i++) {
        char choice;
        std::cout << "Which shape: ";
        std::cin >> choice;
        switch (choice) {
            case '1':
                shapes[i] = new Circle();
                break;

            case '2':
                shapes[i] = new Square();
                break;

            case '3':
                shapes[i] = new Triangle();
                break;

            default:
                // shapes[i] = new Shape();
                // We can't create a instance of Shape object [Compile time
                // error]
                std::cout
                    << "Can't create instance of Shape.... Creating a Circle"
                    << std::endl;
                shapes[i] = new Circle();
        }
    }
    std::cout << "====== PRINITNG ======" << std::endl;
    for (int i = 0; i < n; i++) {
        shapes[i]->draw();
    }
    for (int i = 0; i < n; i++) {
        delete shapes[i];
    }
}