#include <iostream>
#include "Account.h"
#include "Bank.h"

int main() {
    Bank bank;
    int choice;

    // Sample accounts for testing
    Account acc1(101, "Reyal", 500.0);
    Account acc2(102, "Kiran", 1200.0);
    bank.addAccount(acc1);
    bank.addAccount(acc2);

    do {
        // Display menu
        std::cout << "\n=== Bank Menu ===\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Show Account Balance\n";
        std::cout << "5. Exit\n";
        std::cout << "6. View Account Details\n"; // New feature
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if(choice == 1) {
            // Create new account
            int accNum;
            std::string name;
            double initialBalance;
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cin.ignore();
            std::cout << "Enter owner name: ";
            std::getline(std::cin, name);
            std::cout << "Enter initial balance: ";
            std::cin >> initialBalance;

            Account acc(accNum, name, initialBalance);
            bank.addAccount(acc);
            std::cout << "Account created successfully!\n";

        } else if(choice == 2) {
            // Deposit money
            int accNum;
            double amount;
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter amount to deposit: ";
            std::cin >> amount;

            if(bank.depositToAccount(accNum, amount)) {
                std::cout << "Deposit successful!\n";
            } else {
                std::cout << "Deposit failed. Check account number or amount.\n";
            }

        } else if(choice == 3) {
            // Withdraw money
            int accNum;
            double amount;
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter amount to withdraw: ";
            std::cin >> amount;

            if(bank.withdrawFromAccount(accNum, amount)) {
                std::cout << "Withdrawal successful!\n"; 
            } else {
                std::cout << "Withdrawal failed. Check account number or balance.\n";
            }

        } else if(choice == 4) {
            // Show account balance
            int accNum;
            std::cout << "Enter account number: ";
            std::cin >> accNum;

            Account* acc = bank.findAccount(accNum);
            if(acc != nullptr) {
                std::cout << "Account Balance: $" << acc->getBalance() << "\n";
            } else {
                std::cout << "Account not found.\n";
            }

        } else if(choice == 5) {
            std::cout << "Exiting...\n"; // Exit program

        } else if(choice == 6) {
            // View full account details
            int accNum;
            std::cout << "Enter account number: ";
            std::cin >> accNum;

            Account* acc = bank.findAccount(accNum);
            if(acc != nullptr) {
                std::cout << "\n--- Account Details ---\n";
                std::cout << "Account Number: " << acc->getAccountNumber() << "\n";
                std::cout << "Owner Name: " << acc->getOwnerName() << "\n";
                std::cout << "Balance: $" << acc->getBalance() << "\n";
            } else {
                std::cout << "Account not found.\n";
            }

        } else {
            std::cout << "Invalid choice. Try again.\n";
        }

    } while(choice != 5);

    return 0;
}
