#include <iostream>
#include <string>

// Define a class for employee
class Employee {
private:
    std::string name;
    std::string department;

public:
    // Constructor to initialize name and department
    Employee(std::string empName, std::string empDepartment) : name(empName), department(empDepartment) {}

    // Method to get department strategy
    void getDepartmentStrategy() {
        if (department == "HR") {
            std::cout << "Department strategy for HR: Hiring and managing employees." << std::endl;
        } else if (department == "IT") {
            std::cout << "Department strategy for IT: Developing and maintaining software systems." << std::endl;
        } else if (department == "Finance") {
            std::cout << "Department strategy for Finance: Managing financial resources and budgets." << std::endl;
        } else {
            std::cout << "Unknown department. No specific strategy defined." << std::endl;
        }
    }
};

int main() {
    // Create an employee object
    Employee emp("John Doe", "HR");

    // Get and display department strategy
    emp.getDepartmentStrategy();

    return 0;
}
