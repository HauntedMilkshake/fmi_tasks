#include <iostream>
#include <math.h>

int main()
{

    double a, b, c;

    std::cout << "Вход: ";
    std::cin >> a >> b >> c;

    double determinant = b * b - 4 * a * c;

    if (determinant == 0) {
        std::cout << "Root: " << -b / (2 * a);
    } else if (determinant > 0) {
        double sqrtDet = sqrt(determinant);
        std::cout << "Roots: " << (-b + sqrtDet) / (2 * a) << " " << (-b - sqrtDet) / (2 * a);
    } else { 
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-determinant) / (2 * a);
        std::cout << "Complex roots: " << '\n';
        std::cout << realPart << " + " << imaginaryPart << "i" << '\n';
        std::cout << realPart << " - " << imaginaryPart << "i" << '\n';

    }

    return 0;
}
