#include <iostream>

int main() {
    int laptopPrice, usbCount, ram; 
    std::cin >> laptopPrice >> usbCount >> ram;
    std::cout << "Does the laptop have a sdd (1 - yes 0 - no): ";
    bool doesLaptopHaveSsd;
    std::cin >> doesLaptopHaveSsd;

    if (usbCount >= 3 && ( (!doesLaptopHaveSsd || ram < 8) && laptopPrice <= 800 || doesLaptopHaveSsd && ram >= 8 && (laptopPrice <= 1500 || laptopPrice >= 1000))) { 
        std::cout << "Traicho shte si kupi laptopa";
    } else {
        std::cout << "Traicho nqma da si kupi laptopa";
    }

    return 0;
}