#include <iostream>
#include <unordered_map>

int main()
{
    int a, b;

    std::cin >> a >> b;
    // not really needed just wanted to see how it works
    std::unordered_map<int, int> hours = {{24, 12}, {23, 11}, {22, 10}, {21, 9}, {20, 8}, {19, 7}, {18, 6}, {17, 5}, {16, 4}, {15, 3}, {14, 2}, {13, 1}};
    int aHours = a / 100;
    int bHours = b / 100;
    int aMinutes = a % 100;
    int bMinutes = b % 100;
    int resultHours;
    //setting it to a value which can never be achieved
    int resultMinutes = -1;
    bool isValid = !(aHours > 24 || bHours > 24 || a < 0 || b < 0 || aMinutes > 60 || bMinutes > 60);
    if (isValid) {

        // these 2 ifs fit the case where we have an hour from the later part of the day and an hour from the early morning in the next day
        //  eg 2300 0100
        if (aHours > 12 && bHours < 12) {
            auto iterator = hours.find(aHours);
            aHours = iterator->second;

            resultHours = (12 - aHours) + bHours;

            if (aHours > bHours && aMinutes > bMinutes) { 
                resultHours -= 1;
                resultMinutes = 60 - bMinutes;
            }
        }

        if (bHours > 12 && aHours < 12) {
            auto iterator = hours.find(bHours);
            bHours = iterator->second;

            resultHours = (12 - bHours) + aHours;

            
            if (bHours > aHours && bMinutes > aMinutes) { 
                resultHours -= 1;
                resultMinutes = 60 - aMinutes;
            }
        }

        if (aHours >= 12 && bHours >= 12) {
            resultHours = abs(aHours - bHours);
        }
        // check to remove if we have the case where 1810 1720
        if (aHours > bHours && aMinutes < bMinutes) {
            resultHours -= 1;
            resultMinutes = 60 - aMinutes;
        } else if (bHours > aHours && bMinutes < aMinutes) {

            resultHours -= 1;
            resultMinutes = 60 - bMinutes;
        } else {
            //if the minutes haven't been initalized this means that we don't have the case where 
            //we go from the middle part of one day to the early part of the next one so we need 
            // to initalize it 
            if (resultMinutes == -1) { 
                resultMinutes = abs(bMinutes - aMinutes);
            }
        }
        std::cout << resultHours << " : " << resultMinutes;
    } else {
        std::cout << "Invalid";
    }
    return 0;
}