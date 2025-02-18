#include <iostream>

bool areAscending2(double a, double b){ 
    return a < b;   
}

bool areAscending3(double a, double b, double c){ 
    return areAscending2(a, b) && b < c;   
}

bool areAscending4(double a, double b, double c, double d){ 
    return areAscending3(a, b, c) && c < d;   
}

bool areAscending5(double a, double b, double c, double d, double e){ 
    return areAscending4(a, b, c, d) && d < e;   
}


int main() {
    double a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << std::boolalpha;
    std::cout << areAscending5(a, b, c, d, e);

    return 0;
}