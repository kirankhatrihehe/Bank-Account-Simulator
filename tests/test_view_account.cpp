#include "Account.h"
#include "Bank.h"
#include <cassert>
#include <string>

int main() {

    // Test 1: View account details for an existing account
    {
        Bank bank;
        Account acc(1001, "Kiran", 500.0);
        bank.addAccount(acc);

        Account* found = bank.findAccount(1001);
        assert(found != nullptr);
        assert(found->getOwnerName() == "Kiran");
        assert(found->getBalance() == 500.0);
    }

    // Test 2: View account details for a non-existing account
    {
        Bank bank;
        Account* found = bank.findAccount(9999);
        assert(found == nullptr);   // Should not find account
    }

    // Test 3: Check updated balance after deposit + viewing details
    {
        Bank bank;
        Account acc(2002, "Reyal", 100.0);
        bank.addAccount(acc);

        bank.depositToAccount(2002, 50.0);   // new balance = 150

        Account* found = bank.findAccount(2002);
        assert(found != nullptr);
        assert(found->getBalance() == 150.0);
    }

    return 0;
}
