#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    Account(int accNum, const string& name, double initialBalance);

    //obtain
    int getAccountNumber() const;
    string getAccountHolderName() const;
    double getBalance() const;

    // Basic functions
    void deposit(double amount);
    
    // doing withdrwal in virtual
    virtual bool withdraw(double amount);

    // Virtual display
    virtual void displayInfo() const;

    // Virtual destructor
    virtual ~Account() {}
};

#endif
