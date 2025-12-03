#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include <vector>
#include <string>
#include "Account.h"

/* Manages all accounts */
class BankSystem {
private:
    std::vector<Account> accounts;

    int findAccountIndex(int accNum) const; // find account

public:
    BankSystem(); 

    void createAccount(const std::string& name, int accountNumber); // add account
    Account* getAccount(int accountNumber); // get account

    void listAccounts() const; // show accounts
};

#endif
