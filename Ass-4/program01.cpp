/*
C++ program to find area of square, rectangle, circle and triangle by using function overloading
*/

#include <iostream>
int calculate_area(int i) {
    // For square
    return i * i;
}
int calculate_area(int l, int b) {
    // For rectangle
    return l * b;
}
double calculate_area(double r) {
    // For circle
    return 3.14 * r * r;
}
double calculate_area(double h, double b) {
    // For triangle
    return 0.5 * h * b;
}
int main() {
    int i1, i2;
    double d1, d2;
    int choice;
    bool is_break = true;
    std::cout << "Welcome to the world of Mathematics!!!" << std::endl
              << "Press these to find area" << std::endl
              << "1 => Square, 2 => Rectangle, 3 => Circle, 4 => Triangle"
              << std::endl
              << "Any other => To exit" << std::endl;
    while (is_break) {
        std::cout << "=====================" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Enter the length of a side: ";
                std::cin >> i1;
                std::cout << "Area of the square: " << calculate_area(i1)
                          << std::endl;
                break;

            case 2:
                std::cout << "Enter the length and breadth: ";
                std::cin >> i1 >> i2;
                std::cout << "Area of the rectangle: " << calculate_area(i1, i2)
                          << std::endl;
                break;

            case 3:
                std::cout << "Enter the radius: ";
                std::cin >> d1;
                std::cout << "Area of the circle: " << calculate_area(d1)
                          << std::endl;
                break;
            case 4:
                std::cout << "Enter the height and base: ";
                std::cin >> d1 >> d2;
                std::cout << "Area of the triangle: " << calculate_area(d1, d2)
                          << std::endl;
                break;
            default:
                is_break = false;
        }
    }
    std::cout << "bye bye!!!" << std::endl;
}