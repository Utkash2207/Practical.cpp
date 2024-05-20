#include <iostream>

int main() {
    int num1, num2;

    // Get two numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Demonstrate arithmetic and assignment operators
    std::cout << "Arithmetic and Assignment Operators Demo:" << std::endl;
    std::cout << "Initial values: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Addition and assignment
    num1 += num2;
    std::cout << "After num1 += num2, num1 = " << num1 << std::endl;

    // Subtraction and assignment
    num1 -= num2;
    std::cout << "After num1 -= num2, num1 = " << num1 << std::endl;

    // Multiplication and assignment
    num1 *= num2;
    std::cout << "After num1 *= num2, num1 = " << num1 << std::endl;

    // Division and assignment
    num1 /= num2;
    std::cout << "After num1 /= num2, num1 = " << num1 << std::endl;

    // Modulus and assignment
    num1 %= num2;
    std::cout << "After num1 %= num2, num1 = " << num1 << std::endl;

    return 0;
}
