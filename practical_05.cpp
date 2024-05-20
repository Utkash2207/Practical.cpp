#include <iostream>

int main() {
    int number;

    // Accept a number from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Display factors of the number
    std::cout << "Factors of " << number << " are: ";
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
