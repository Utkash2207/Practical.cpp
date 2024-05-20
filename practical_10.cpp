#include <iostream>
#include <cmath>

// Function to calculate power
double power(double base, int exponent) {
    // Using the pow function from cmath library to calculate power
    return std::pow(base, exponent);
}

int main() {
    double base;
    int exponent;

    // Accept base and exponent from the user
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    // Calculate and display the result
    double result = power(base, exponent);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
