#include <iostream>

int main() {
    int number;
    unsigned long long factorial = 1;

    // Accept a number from the user
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Calculate factorial
    if (number < 0) {
        std::cout << "Error: Factorial is not defined for negative numbers." << std::endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    }

    return 0;
}
