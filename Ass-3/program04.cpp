/*
C++ program to create the bank transactions using copy constructor
*/

#include <iostream>
class Transactions {
   private:
    std::string sender, receiver;
    double money;

   public:
    Transactions(std::string s1, std::string s2, double d) {
        sender = s1;
        receiver = s2;
        money = d;
    }
    Transactions(const Transactions &t) {
        sender = t.receiver;
        receiver = t.sender;
        money = t.money;
    }
    void printAll() {
        std::cout << "Sender => " << sender << std::endl;
        std::cout << "Receiver => " << receiver << std::endl;
        std::cout << "Transferred amount => " << money << std::endl;
    }
};
int main() {
    std::string sender, receiver;
    double money;
    char choice;
    std::cout << "Enter the sender and receiver names" << std::endl;
    std::cin >> sender >> receiver;
    std::cout << "Enter the amount to send: ";
    std::cin >> money;
    Transactions t1(sender, receiver, money);
    t1.printAll();
    std::cout << "Do you want to refund the amount? y/n ";
    std::cin >> choice;
    if (choice == 'y') {
        Transactions t2 = t1;
        t2.printAll();
    }
    return 0;
}