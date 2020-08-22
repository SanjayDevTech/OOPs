#include<iostream>

template<typename T>
void swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    char choice;
    std::cout << "Which type?\n"
    << "0 => int, 1 => double, 2 => char: ";
    std::cin >> choice;
    if(choice == '0') {
        int a, b;
        std::cout << "Enter two integers: ";
        std::cin >> a >> b;
        swap(&a, &b);
        std::cout << "After swapping....\n";
        std::cout << "a => " << a << ", b => " << b << "\n";
    } else if(choice  == '1') {
        double a, b;
        std::cout << "Enter two floating numbers: ";
        std::cin >> a >> b;
        swap(&a, &b);
        std::cout << "After swapping....\n";
        std::cout << "a => " << a << ", b => " << b << "\n";
    } else if(choice == '2') {
        char a, b;
        std::cout << "Enter two characters: ";
        std::cin >> a >> b;
        swap(&a, &b);
        std::cout << "After swapping....\n";
        std::cout << "a => " << a << ", b => " << b << "\n";
    } else {
        std::cout << "Invalid choice\n";
    }
}