# Implementation Plan – Bank Account Simulator

## Feature 1: Create New Account
**Trigger:** User selects "Create new account"  
**Input Needed:** Owner name, account number  

**Flow:**  
1. Ask user for name and account number  
2. Call `BankSystem::createAccount(name, accountNumber)`  
3. Add new account to `accounts` vector  
4. Show confirmation message  

**Data Changed:** Accounts list  

---

## Feature 2: Deposit Money
**Trigger:** User selects "Deposit money"  
**Input Needed:** Account number, deposit amount  

**Flow:**  
1. Ask user for account number and amount  
2. Find account using `BankSystem::getAccount(accountNumber)`  
3. Call `Account::deposit(amount)`  
4. Add transaction to account history  
5. Show new balance  

**Data Changed:** Account balance, transaction history  

---

## Feature 3: Withdraw Money
**Trigger:** User selects "Withdraw money"  
**Input Needed:** Account number, amount  

**Flow:**  
1. Ask user for account number and amount  
2. Find account using `BankSystem::getAccount(accountNumber)`  
3. Call `Account::withdraw(amount)`  
4. If balance sufficient, subtract amount and add transaction  
5. Show confirmation or error  

**Data Changed:** Account balance, transaction history  

---

## Feature 4: Transaction History
**Trigger:** User selects "View transaction history"  
**Input Needed:** Account number  

**Flow:**  
1. Ask user for account number  
2. Find account using `BankSystem::getAccount(accountNumber)`  
3. Call `Account::printHistory()`  
4. Display all transactions  

**Data Changed:** None  

---

## Feature 5: List All Accounts
**Trigger:** User selects "List all accounts"  
**Input Needed:** None  

**Flow:**  
1. Call `BankSystem::listAccounts()`  
2. Display each account’s name and number  

**Data Changed:** None  
