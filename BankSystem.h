#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include <vector>
#include <string>
#include "Account.h"

// BankSystem handles multiple accounts
class BankSystem {
private:
    std::vector<Account> accounts;

    int findAccountIndex(int accNum) const;

public:
    BankSystem();

    void createAccount(const std::string& name, int accountNumber);
    Account* getAccount(int accountNumber);
    void listAccounts() const;
};

#endif
