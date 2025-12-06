#include "bank.h"
#include <iostream>
#include <limits>

int main() {
    Bank bank;
    int choice;

    do {
        std::cout << "\n--- Bank Account Simulator ---\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Show All Accounts\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (std::cin.fail()) { // input validation
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            choice = -1;
        }

        switch (choice) {
        case 1: {
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

            Account newAcc(accNum, name, initialBalance);
            bank.addAccount(newAcc);
            break;
        }
        case 2: {
            int accNum;
            double amount;
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter deposit amount: ";
            std::cin >> amount;
            bank.depositToAccount(accNum, amount);
            break;
        }
        case 3:
            bank.showAllAccounts();
            break;
        case 0:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
