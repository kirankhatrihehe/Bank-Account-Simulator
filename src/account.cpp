#include "account.h"
#include <iostream>

// Constructors
Account::Account() : accountNumber(0), ownerName(""), balance(0.0) {}

Account::Account(int accNum, const std::string& name, double initialBalance)
    : accountNumber(accNum), ownerName(name), balance(initialBalance) {}

// Getters
int Account::getAccountNumber() const { return accountNumber; }
std::string Account::getOwnerName() const { return ownerName; }
double Account::getBalance() const { return balance; }

// Setters
void Account::setOwnerName(const std::string& name) { ownerName = name; }
void Account::setBalance(double amount) { balance = amount; }

// Deposit
void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited $" << amount << " successfully!\n";
    } else {
        std::cout << "Invalid deposit amount!\n";
    }
}

// Withdraw (optional for later)
void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawn $" << amount << " successfully!\n";
    } else {
        std::cout << "Invalid withdrawal amount or insufficient balance!\n";
    }
}
