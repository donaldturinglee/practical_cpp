#include <iostream>

int getUserInput() {
    std::cout << "Enter a integer: ";
    double input{};
    std::cin >> input;

    return input;
}

void interchange(int x , int y) {
    int temp{x};
    x = y;
    y = temp;
    std::cout << "Number at location x = " << x << " and y = " << y << '\n';
}

int main() {
    int x{getUserInput()};
    int y{getUserInput()};

    std::cout << "Before Swapping" << '\n';
    std::cout << "Number at location x = " << x << " and y = " << y << '\n';
    std::cout << "After Swapping" << '\n';
    interchange(x, y);
    return 0;
}