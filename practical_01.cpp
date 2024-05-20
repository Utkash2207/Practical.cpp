#include <iostream>

int main() {
    // Print numbers
    std::cout << "Numbers:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    // Print alphabets
    std::cout << "Alphabets:" << std::endl;
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        std::cout << ch << " ";
    }
    std::cout << std::endl << std::endl;

    // Print special characters
    std::cout << "Special Characters:" << std::endl;
    char special_characters[] = "!@#$%^&*()_+-=[]{}|;:',.<>?/~";
    for (char ch : special_characters) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    return 0;
}
