#include <iostream> 

int main() {

    std::cout << "Please select one of these basic operations: +, -, *, / by typing it in" << '\n';
    char operation;
    std::cout << "Operation: ";
    std::cin >> operation;
    std::cout << "Now enter the numbers with which you want to perform the operation: " << '\n';

    double a = 0, b = 1;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b ;


    switch(operation) { 
        case '+': 
            std::cout << "a + b = " << (a + b);
            break;
        case '-': 
            std::cout << "a - b = " << (a - b);
            break;
        case '*':
            std::cout << "a * b = " << (a * b);
            break;
        case '/':
            std::cout << "a / b = " << (a / b);
            break;
        default:
            std::cout << "Unfortunately the operation wasn't identified";
    }

    std::cout << '\n' << "Try again or leave y/n: ";
    char cont = 'n';
    std::cin >> cont;
    switch(cont) { 
        case 'y': case 'Y':
            main();
        default:
            return 0;
    }

    return 0;
}