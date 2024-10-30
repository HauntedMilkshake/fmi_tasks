#include <iostream> 

double discountedPricePerTicket(double ticketPrice, double discountPercentage) { 
    return ticketPrice - (ticketPrice * discountPercentage);
}
int main() { 

    int peopleCount;
    double ticketPrice; 
    std::cin >> peopleCount >> ticketPrice;
    if (peopleCount >= 5 && peopleCount <= 10) { 
        std::cout << (discountedPricePerTicket(ticketPrice, 0.05) * peopleCount);
    } else if (peopleCount >= 11 && peopleCount <= 20) { 
        std::cout << (discountedPricePerTicket(ticketPrice, 0.1) * peopleCount);
    } else if (peopleCount >= 21) { 
        std::cout << (discountedPricePerTicket(ticketPrice, 0.15) * peopleCount);
    } else { 
        std::cout << ticketPrice * peopleCount;
    }
    return 0;
}