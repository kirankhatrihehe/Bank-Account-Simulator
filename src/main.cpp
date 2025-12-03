#include <iostream>
#include <string>
#include "BankSystem.h"

using namespace std;

void displayMenu();

int main() {
    BankSystem bank;

    int choice;
    bool running = true;

    while (running) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            string name;
            int accNum;
            cout << "Enter account owner name: ";
            cin >> name;
            cout << "Enter new account number: ";
            cin >> accNum;
            bank.createAccount(name, accNum);

        } else if (choice == 2) {
            int accNum;
            cout << "Enter account number: ";
            cin >> accNum;

            Account* acc = bank.getAccount(accNum);
            if (acc) acc->printSummary();
            else cout << "Account not found.\n";

        } else if (choice == 3) {
            int accNum;
            double amount;

            cout << "Account number: ";
            cin >> accNum;
            cout << "Deposit amount: ";
            cin >> amount;

            Account* acc = bank.getAccount(accNum);
            if (acc) acc->deposit(amount);
            else cout << "Account not found.\n";

        } else if (choice == 4) {
            int accNum;
            double amount;

            cout << "Account number: ";
            cin >> accNum;
            cout << "Withdraw amount: ";
            cin >> amount;

            Account* acc = bank.getAccount(accNum);
            if (acc) acc->withdraw(amount);
            else cout << "Account not found.\n";

        } else if (choice == 5) {
            int accNum;
            cout << "Account number: ";
            cin >> accNum;

            Account* acc = bank.getAccount(accNum);
            if (acc) acc->printHistory();
            else cout << "Account not found.\n";

        } else if (choice == 6) {
            bank.listAccounts();
        } else if (choice == 7) {
            running = false;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}

void displayMenu() {
    cout << "\n=== Bank Account Simulator ===\n";
    cout << "1. Create new account\n";
    cout << "2. View account summary\n";
    cout << "3. Deposit money\n";
    cout << "4. Withdraw money\n";
    cout << "5. View transaction history\n";
    cout << "6. List all accounts\n";
    cout << "7. Quit\n";
    cout << "Choice: ";
}
