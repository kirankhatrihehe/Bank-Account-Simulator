#include "../Account.h"
#include <cassert>
#include <iostream>

using namespace std;

int main() {
    cout << "Running Withdraw Tests...\n";

    // Test 1: Normal withdraw
    {
        Account acc(100);
        acc.withdraw(30);
        assert(acc.getBalance() == 70 && "Test 1 Failed: Normal withdraw incorrect");
    }

    // Test 2: Withdraw more than balance
    {
        Account acc(50);
        acc.withdraw(100);
        assert(acc.getBalance() == 50 && "Test 2 Failed: Over-withdraw should not change balance");
    }

    // Test 3: Withdraw negative amount
    {
        Account acc(80);
        acc.withdraw(-10);
        assert(acc.getBalance() == 80 && "Test 3 Failed: You don’t have enough money");
    }

    // Test 4: Withdraw zero
    {
        Account acc(60);
        acc.withdraw(0);
        assert(acc.getBalance() == 60 && "Test 4 Failed: Zero withdraw ");
    }

    cout << "All Withdraw Tests Passed!\n";
    return 0;
}
