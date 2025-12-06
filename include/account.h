#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    int accountNumber;
    std::string ownerName;
    double balance;

public:
    // Constructors
    Account();
    Account(int accNum, const std::string& name, double initialBalance);

    // Getters
    int getAccountNumber() const;
    std::string getOwnerName() const;
    double getBalance() const;

    // Setters
    void setOwnerName(const std::string& name);
    void setBalance(double amount);

    // Core feature
    void deposit(double amount);
    void withdraw(double amount);  // Optional now, can implement later
};

#endif
