#include <iostream>

double account = 0.0;

void insert(double money) {
    if (money >= 0) {
        account += money;
        std::cout << "Successfully inserted " << money << " Balance: " << account << '\n';
    } else {
        std::cout << "transaction failed" << '\n';
    }
}

void withdraw(double money) {
    if (money <= account && money >= 0){
        account -= money;
        std::cout << "Successfully withdrew " << money << " Balance: " << account << '\n';
    } else {
        std::cout << "transaction failed" << '\n';
    }
}

void checkBalance(double account) {
    std::cout << "Balance: " << account << '\n';
}

int main() {
    std::cout << "WELCOME TO UBB" << '\n';
    std::cout << "Insert: 1  |  Withdraw: 2 | checkBalance: 3 | Exit: 4" << '\n';
    int input;
    double money;

    std::cout << "Choose: ";
    std::cin >> input;
    switch (input) {
    case 1:
        std::cout << "Enter ammount to insert: " << '\n';
        std::cin >> money;
        insert(money);
        main();
        break;
    case 2:
        std::cout << "Enter ammount to withdraw: " << '\n';
        std::cin >> money;
        withdraw(money);
        main();
        break;
    case 3:
        checkBalance(account);
        main();
        break;
    case 4:
        break;
    default:
        std::cout << "Invalid input" << '\n';
        main();
        break;
    }

    return 0;
}