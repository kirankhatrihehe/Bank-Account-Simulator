# Bank Account Simulator

## Project Overview
A simple bank account simulator in C++ that allows users to deposit and withdraw money. The project uses classes Account and Bank to manage accounts and balances.


## Current Status

**Implemented Features**:
-  Feature 1: Deposit Money
  - Users can deposit money into an account.
  - Validates input to prevent negative deposits.
-  Feature 2: Withdraw Money
  - Users can withdraw money from an account.
  - Validates balance to prevent overdraft.
  - Integrated into main menu and Bank class.
  - Feature 3: View Account Details  
  - Users can view full account information (account number, owner, balance)  
  - Handles invalid input (shows error if account not found)  
  - Integrated into main menu and Bank class  



## How to Build and Run

### Using CMake
```bash
mkdir build
cd build
cmake ..
cmake --build .
