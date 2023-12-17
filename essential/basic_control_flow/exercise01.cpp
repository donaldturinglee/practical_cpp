#include <iostream>

int getUserInput() {
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

int roundOff(int i, int j) {
    int k{i + j - i % j};
    return k;
}

int main() {

    int i{getUserInput()};
    int j{getUserInput()};

    int k{roundOff(i, j)};
    
    std::cout << "Next largest multiple = " << k << '\n';

    return 0;
}