#include <iostream>
class Account {
   protected:
    int balance = 0;
    std::string acc_num;

   public:
    bool is_active = true;
    int is_savings;

   public:
    Account(int i,std::string acc, int type) {
        is_savings = type != 0;
        balance = i;
        acc_num = acc;
    }
    Account() {}
    int get_balance() { return balance; }

    std::string get_acc_num() { return acc_num; }

   public:
    void deposit(int money) { balance += money; }

   public:
    void withdraw(int money) {
        if (money > balance) {
        } else {
            balance -= money;
        }
    }
};
class SavingsAccount : public Account {
   private:
    int interest = 5;

   public:
    SavingsAccount(int i, std::string acc) : Account(i, acc, 1) {}
    void set_interest(int i) { interest = i; }
    void add_interest() {
        int temp = (interest / 100) * balance;
        deposit(temp);
    }
};
class CurrentAccount : public Account {
   private:
    int limit = 5000;
    int overdraft_amount = 0;

   public:
    CurrentAccount(int i, std::string acc) : Account(i, acc, 0) {}

    void set_limit(int i) { limit = i; }
    void withdraw_money(int money) {
        if (balance < money) {
            std::cout << "Low money" << std::endl;
            return;
        }
        if (money >= limit) {
            overdraft_amount += (money - limit);
        }
        balance -= money;
    }
    void send_mail() {
        if (overdraft_amount > 0) {
            std::cout << "Sended mail. Overdraft amount =>" << overdraft_amount
                      << std::endl;
        }
    }
};
class Bank {
   private:
    Account* accounts[3];
    int start = 0;

   public:
    void open(Account* ac) {
        if (start > 3) {
            std::cout << "Can't open account" << std::endl;
            return;
        }
        accounts[start] = ac;
        start++;
    }
    void close(int num) { accounts[num]->is_active = false; }
    void update() {
        for (int i = 0; i < start; i++) {
            if (accounts[i]->is_active) {
                if (accounts[i]->is_savings) {
                    SavingsAccount* s1 = (SavingsAccount*)accounts[i];
                    s1->add_interest();
                } else {
                    CurrentAccount* s1 = (CurrentAccount*)accounts[i];
                    s1->send_mail();
                }
            }
        }
    }
    void print(int num) {
        std::cout << "Account number => " << accounts[num]->get_acc_num()
                  << std::endl
                  << "Balance => " << accounts[num]->get_balance() << std::endl
                  << "Type => " << (accounts[num]->is_savings ? "Savings" : "Current") << std::endl
                  << "Active => " << (accounts[num]->is_active ? "Active" : "Closed account") << std::endl;
    }

    ~Bank() {
        for (int i = 0; i < start; i++) {
            delete accounts[i];
        }
        std::cout << "bank deleted" << std::endl;
    }
};

void input(Account* ac) {
    char c;
    std::cout << "Deposit or withdraw d/w: ";
    std::cin >> c;
    if (c == 'd') {
        int money;
        std::cout << "Enter deposit money: ";
        std::cin >> money;
        ac->deposit(money);
    } else {
        int money;
        std::cout << "Enter withdraw money: ";
        std::cin >> money;
        ac->withdraw(money);
    }
}

int main() {
    Bank bank;
    for (int i = 0; i < 3; i++) {
        int type;
        std::string acc;
        std::cout << "Type(0 for Current / 1 for Savings) => ";
        std::cin >> type;
        std::cout << "Account number => ";
        std::cin >> acc;
        if (type == 0) {
            int num;
            std::cout << "Initial balance => ";
            std::cin >> num;
            SavingsAccount* s1 = new SavingsAccount(num, acc);
            bank.open(s1);
            input(s1);
        } else {
            int num;
            std::cout << "Initial balance => ";
            std::cin >> num;
            CurrentAccount* s1 = new CurrentAccount(num, acc);
            bank.open(s1);
            input(s1);
        }
    }
    char choice;
    do {
        int num;
        std::cout << "Enter the account index: ";
        std::cin >> num;
        bank.print(num);
        std::cout << "Do you want to continue: ";
        std::cin >> choice;
    } while (choice == 'y');
    bank.update();
}