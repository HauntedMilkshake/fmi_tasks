#include <iostream> 

unsigned short int init(unsigned short int upperLimit, unsigned short int lowerLimit) { 
    unsigned short int val;
    do { 
        std::cin >> val;
    } while (val < lowerLimit || val > upperLimit);
    return val;
}

void intToMonth(char* monthToAsign, unsigned short int monthNumeric) { 
    const char months[12][10] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };  

    for (int i = 0; i < 10; ++i) { 
        monthToAsign[i] = months[monthNumeric - 1][i];
        if (months[monthNumeric - 1][i] == '\0') break;
    }
}

bool isLeap(unsigned short int y) { 
    return y % 100 == 0 ? y % 400 == 0 : y % 4 == 0;
}

void intToDay(char* dayToAsign, unsigned short int d, unsigned short m, unsigned short y) { 

    unsigned short int newMonth = m > 2 ? m : m + 12;
    unsigned short int newYear = newMonth > 12 ? y - 1 : y;
    unsigned short int yearOfCentury = newYear % 100;
    unsigned short int century = newYear / 100;

    short int dayIndex = (d + 13 * (newMonth + 1) / 5 + yearOfCentury + yearOfCentury / 4 + century / 4 + 5 * century) % 7;  

    const char days[7][10] { 
        "Saturday", "Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday"
    };

    for (int i = 0; i < 10; ++i) { 

        dayToAsign[i] = days[dayIndex][i];
        if (days[dayIndex][i] == '\0') break;
    }
}

void addDay(unsigned short int& currentDays, unsigned short int& currentMonth, unsigned short int& currentYear) { 
    switch(currentMonth) {
        case 1: case 3: case 5: case 7: case 8: case 10:
            if (currentDays == 31) { 
                currentDays = 1;
                ++currentMonth;
            } else { 
                ++currentDays;
            }
            break;
        case 2:
            if (isLeap(currentYear) && currentDays == 29 || !isLeap(currentYear) && currentDays == 28) { 
                currentDays = 1;
                ++currentMonth;
            } else { 
                ++currentDays;
            }
            break;
        case 4: case 6: case 9: case 11: 
            if (currentDays == 30) { 
                currentDays = 1;
                ++currentMonth;
            } else { 
                ++currentMonth;
            }
            break;
        case 12:
            if (currentDays == 31) { 
                currentDays = 1;
                currentMonth = 1;
                ++currentYear;
            } else { 
                ++currentDays;
            }
            break;
    }
}

void printToday(unsigned short int d, unsigned short int m, unsigned short int y) { 
    char day[10];
    char month[10];
    intToDay(day, d, m, y);
    intToMonth(month, m);

    std::cout << day << ", " << d << ", " << month << ", " << y;
}

unsigned short int getMonthDays(unsigned short int m, bool isLeap) { 
    unsigned short days;
    switch(m) { 
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 2:
            days = isLeap ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
    }
    return days;
}

int main() { 
    unsigned short int day, month, year;

    year = init(2100, 1900);
    month = init(12, 1);
    day = init(getMonthDays(month, isLeap(year)), 1);

    addDay(day, month, year);
    printToday(day, month, year);

    return 0;
}