#include <iostream>
#include <iomanip>
#include <cmath>

double getUserInput() {
    std::cout << "Enter a number: ";
    double input{};
    std::cin >> input;

    return input;
}

void convertCoordinates(double x, double y) {
    const double PI{3.14159265358979323846};
    double r{std::sqrt(x * x + y * y)};
    double theta{std::atan2(y, x)};
    theta = theta * 180.0 / PI;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "r = " << r << ", theta = " << theta << '\n';
}

int main() {

    double x{getUserInput()};
    double y{getUserInput()};
    convertCoordinates(x, y);

    return 0;
}