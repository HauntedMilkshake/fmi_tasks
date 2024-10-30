#include <iostream> 

int main() { 

    bool secondHand;
    bool hasAirConditioning;
    int mileage; 
    int horsepower;
    int price;

    bool wouldBuyIfNew = (!secondHand && horsepower >= 70 || horsepower <= 90 && price <= 25000);
    bool wouldBuyIfOld = (secondHand && (hasAirConditioning && mileage < 115000 && horsepower >= 70 && price <= 6000) || (!hasAirConditioning && mileage < 180000 && horsepower >= 60 && price <= 2000));

    bool wouldBuy = (wouldBuyIfNew || wouldBuyIfOld);
    if (wouldBuy) { 
        std::cout << "bi kupil";
    } else { 
        std::cout << "ne bi kupil";
    }
    return 0;
}