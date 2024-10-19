#include <iostream>

int main() { 

    int tomatoes, peppers, carrots, olives, potatoes, flavoringAgent;
    std::cin >> tomatoes >> peppers >> carrots >> olives >> potatoes >> flavoringAgent;

    bool willFrendCome;
    std::cout << "Will a friend come (1 - yes 0 - no): ";
    std::cin >> willFrendCome; 
    bool canTraichoMakeStudentSalad = (tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && flavoringAgent >= 150);
    bool canTraichoMakeStudentSoop = (tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && flavoringAgent >= 200);
    bool canTrachoMakeStudentGiuvech = (tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && flavoringAgent >= 300);

    std::cout << std::boolalpha;
    std::cout << (canTraichoMakeStudentSalad || (willFrendCome && (canTraichoMakeStudentSoop || canTrachoMakeStudentGiuvech)));

    return 0;
}