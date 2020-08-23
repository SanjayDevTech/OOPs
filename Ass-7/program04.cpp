#include<iostream>
#define SIZE 10
template<typename T>
class Stack {
    private:
    int length = 0;
    T frames[SIZE];
    public:
    Stack() {}
    Stack(T initial_value) {
        frames[length] = initial_value;
        length++;
    }
    void print() {
        for(int i = length-1; i >= 0; i--) {
            std::cout<< "|   " << frames[i] << "\n";
        }
        std::cout<< "|--------\n";
    }
    bool push(T value) {
        if(SIZE <= length) {
            length = SIZE;
            return false;
        }
        frames[length] = value;
        length++;
        return true;
    }
    bool pop() {
        if(length <= 0) {
            length = 0;
            return false;
        }
        length--;
        return true;
    }

};
int main(){
    Stack<int> stack;
    char choice;
    int temp;
    do {
        char op;
        std::cout << "Push (1) or Pop(any key): ";
        std::cin >> op;
        switch(op) {
            case '1':
                std::cout << "Enter the element: ";
                std::cin >> temp;
                if(!stack.push(temp)) {
                    std::cout << "Stack Overflow...\n";
                }
                break;
            default:
                if(!stack.pop()) {
                    std::cout << "Stack is empty...\n";
                }
        }
        std::cout << "Continue? [Y|N]: ";
        std::cin >> choice;
    } while(choice == 'Y' || choice == 'y');
    stack.print();
}