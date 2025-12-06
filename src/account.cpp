#include "Account.h"
#include <iostream>

// Constructors
Account::Account() : accountNumber(0), ownerName(""), balance(0.0) {}

Account::Account(int accNum, const std::string& name, double initialBalance)
    : accountNumber(accNum), ownerName(name), balance(initialBalance >= 0 ? initialBalance : 0.0) {
    if (initialBalance < 0) {
        std::cerr << "Initial balance cannot be negative. Setting to 0.\n";
    }
}

// Getters
int Account::getAccountNumber() const {
    return accountNumber;
}

std::string Account::getOwnerName() const {
    return ownerName;
}

double Account::getBalance() const {
    return balance;
}

// Setters
void Account::setOwnerName(const std::string& name) {
    ownerName = name;
}

void Account::setBalance(double amount) {
    if (amount >= 0) {
        balance = amount;
    } else {
        std::cerr << "Balance cannot be negative.\n";
    }
}

// Core feature
void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    } else {
        std::cerr << "Deposit amount must be positive.\n";
    }
}

// New withdraw function
bool Account::withdraw(double amount) {
    if (amount <= 0) {
        std::cerr << "Withdrawal amount must be positive.\n";
        return false;
    }

    if (amount > balance) {
        std::cerr << "Insufficient balance. Withdrawal failed.\n";
        return false;
    }

    balance -= amount;
    return true;
}
