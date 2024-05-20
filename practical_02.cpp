#include <iostream>

int main() {
    int ageYears;
    
    // Accept age in years from the user
    std::cout << "Enter your age in years: ";
    std::cin >> ageYears;

    // Convert years to months and days
    int ageMonths = ageYears * 12;
    int ageDays = ageYears * 365; // This is a simple approximation; it doesn't handle leap years.

    // Display age in months and days
    std::cout << "Your age in months is: " << ageMonths << std::endl;
    std::cout << "Your age in days is: " << ageDays << std::endl;

    return 0;
}
