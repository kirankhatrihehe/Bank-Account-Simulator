#include "../bank.h"  // Adjust path if needed
#include <cassert>
#include <iostream>

void testNormalDeposit() {
    std::cout << "Test 1: Normal Deposit... ";

    Account acc(101, "Alice", 100.0);
    acc.deposit(50.0);

    assert(acc.getBalance() == 150.0);

    std::cout << "PASSED\n";
}

void testNegativeDeposit() {
    std::cout << "Test 2: Negative Deposit... ";

    Account acc(102, "Bob", 200.0);
    acc.deposit(-50.0);  // Should not change balance

    assert(acc.getBalance() == 200.0);

    std::cout << "PASSED\n";
}

void testDepositToBank() {
    std::cout << "Test 3: Deposit Using Bank Class... ";

    Bank bank;
    Account acc(103, "Charlie", 300.0);
    bank.addAccount(acc);

    bank.depositToAccount(103, 100.0);

    Account* updatedAcc = bank.findAccount(103);
    assert(updatedAcc != nullptr);
    assert(updatedAcc->getBalance() == 400.0);

    std::cout << "PASSED\n";
}

int main() {
    std::cout << "\n=== Running Deposit Tests ===\n";

    testNormalDeposit();
    testNegativeDeposit();
    testDepositToBank();

    std::cout << "\n✅ All tests passed!\n";

    return 0;
}
