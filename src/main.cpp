#include "Bank.h"
#include <iostream>
#include <limits>

int main() {
    Bank bank;
    int choice;

    do {
        std::cout << "\n--- Bank Menu ---\n";
        std::cout << "1. Create Account\n2. Display Accounts\n0. Exit\nChoice: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        if (choice == 1) {
            std::string name;
            double balance;

            std::cout << "Enter name: ";
            std::cin.ignore();
            std::getline(std::cin, name);

            if (name.empty()) {
                std::cout << "Name cannot be empty.\n";
                continue;
            }

            std::cout << "Enter initial balance: ";
            std::cin >> balance;

            if (std::cin.fail() || balance < 0) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid balance. Must be non-negative.\n";
                continue;
            }

            Account acc(name, balance);
            bank.addAccount(acc);
            std::cout << "Account created successfully!\n";

        } else if (choice == 2) {
            bank.displayAccounts();
        } else if (choice != 0) {
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
