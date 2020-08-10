#include <iostream>
class Shape {
   public:
    void say() {
        std::cout << "This is a Shape" << std::endl;
    }
};
class Polygon : private Shape {
   public:
    void say() {
        std::cout << "Polygon is a Shape" << std::endl;
    }
};
class Rectangle : private Polygon {
   public:
    void say() {
        std::cout << "Rectangle is a Polygon" << std::endl;
    }
};
class Triangle : private Polygon {
   public:
    void say() {
        std::cout << "Triangle is a Polygon" << std::endl;
    }
};
class Square : public Rectangle {
    public:
    void say() {
        std::cout << "Square is a Rectangle" << std::endl;
    }
};
int main() {
    Shape s;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square sq;

    s.say();
    p.say();
    r.say();
    t.say();
    sq.say();
}