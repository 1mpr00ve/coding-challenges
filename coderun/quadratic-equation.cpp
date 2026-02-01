#include <iostream>
// Time complexity: O(1) - constant-time arithmetic operations
// Space complexity: O(1) - uses a fixed number of variables
#include <cmath>
#include <iomanip>

int main() 
{
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    std::cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

    std::cout << std::fixed << std::setprecision(6);

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        std::cout << "2" << std::endl;
        std::cout << x2 << " " << x1 << std::endl;
    } else if (discriminant == 0) {
        x1 = -b/(2*a);

        std::cout << "1" << std::endl;
        std::cout << x1 << std::endl;
    } else {
        std::cout<< "0" << std::endl;
    }

    return 0;
}