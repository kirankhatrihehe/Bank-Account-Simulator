#ifndef BANK_H
#define BANK_H

#include "account.h"
#include <vector>

class Bank {
private:
    std::vector<Account> accounts;

public:
    void addAccount(const Account& acc);
    Account* findAccount(int accountNumber);  // Returns pointer to account or nullptr
    void depositToAccount(int accountNumber, double amount);
    void showAllAccounts() const;
};

#endif
