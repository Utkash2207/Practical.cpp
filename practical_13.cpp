#include <iostream>
#include <string>

class bank_account {
private:
    std::string Depositor_name;
    std::string Acc_type;
    double balance;

public:
    // Constructor to initialize data members
    bank_account(std::string name, std::string type, double initial_balance) : 
        Depositor_name(name), Acc_type(type), balance(initial_balance) {}

    // Function to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit of $" << amount << " successful." << std::endl;
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
        }
    }

    // Function to inquire about the balance
    void balance_inquiry() {
        std::cout << "Current balance: $" << balance << std::endl;
    }
};

int main() {
    // Create a bank account
    bank_account account("John Doe", "Savings", 1000.0);

    // Demonstrate account operations
    account.deposit(500.0);
    account.balance_inquiry();
    account.withdraw(200.0);
    account.balance_inquiry();
    account.withdraw(1500.0); // This withdrawal should fail due to insufficient balance
    account.balance_inquiry();

    return 0;
}
