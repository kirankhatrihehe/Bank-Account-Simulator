#include "bank.h"
#include <iostream>

void Bank::addAccount(const Account& acc) {
    accounts.push_back(acc);
    std::cout << "Account added successfully!\n";
}

Account* Bank::findAccount(int accountNumber) {
    for (auto& acc : accounts) {
        if (acc.getAccountNumber() == accountNumber) {
            return &acc;
        }
    }
    return nullptr;
}

void Bank::depositToAccount(int accountNumber, double amount) {
    Account* acc = findAccount(accountNumber);
    if (acc != nullptr) {
        acc->deposit(amount);
    } else {
        std::cout << "Account not found!\n";
    }
}

void Bank::showAllAccounts() const {
    if (accounts.empty()) {
        std::cout << "No accounts available.\n";
        return;
    }
    for (const auto& acc : accounts) {
        std::cout << "Account #" << acc.getAccountNumber()
                  << " | Owner: " << acc.getOwnerName()
                  << " | Balance: $" << acc.getBalance() << "\n";
    }
}
