#include <iostream>
// Online C++ compiler to run C++ program online
#include <iostream>

double power(double number, int pow) { 
    double answer = 1;
    for (int i = 0; i < pow; ++i) { 
        answer *= number;
    }
    return answer;
}

double min(double a, double b) { 
    return (a < b) ? a : b;
}

double max(double a, double b) { 
    return (a > b) ? a : b;
}

double minOf3(double a, double b, double c) {
    double d = min(a, b);
    return (d < c) ? d : c; 
}

double maxOf3(double a, double b, double c) { 
    double d = max(a, b);
    return (d > c) ? d : c;
}

bool isAlpha(char c) { 
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isDigit(char c) { 
    return c == '0' || c == '1' || c == '2' ||  c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9'; 
}

int main() { 
    double a, b, c, d;
    int pow;
    char ch;
   std::cout << "a, b, c, d: ";
    std::cin >> a >> b >> c >> d;

    std::cout << "pow: ";
    std::cin >> pow;

    std::cout << "char: ";
    std::cin >> ch;
    std::cout << std::boolalpha;
    
    std::cout << "pow(" << a << ", " << pow << "): " << power(a, pow) << '\n';

    std::cout << "min(" << a << ", " << b << "): " << min(a, b) << '\n';

    std::cout << "max(" << c << ", " << d << "): " << max(c, d) << '\n';

    std::cout << "minOf3(" << a << ", " << b << ", " << c << "): " << minOf3(a, b, c) << '\n';

    std::cout << "maxOf3(" << a << ", " << b << ", " << c << "): " << maxOf3(a, b, c) << '\n';

    std::cout << "isAlpha('" << ch << "'): " << isAlpha(ch)<< '\n';

    std::cout << "isDigit('" << ch << "'): " << isDigit(ch);

    return 0;
}