#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <ctime>
//money record//
class Transaction {
private:
    std::string type;   // "we can do Deposit" or "Withdrawal"
    double amount;
    std::string timestamp;

public:
    // Constructor
    Transaction(const std::string& type, double amount);

    // Getters
    std::string getType() const;
    double getAmount() const;
    std::string getTimestamp() const;
};

#endif
