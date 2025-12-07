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
  - Users can view full details of an account:  Account number, owner name, and balance.
  - 
**AI USES**
 - ChatGPT was used only to clarify ideas and provide guidance. I wrote all the actual code and test cases myself.
   
**In Progress**:
-  Additional features (e.g., account search, transaction history)

**Known Issues**:
- Input validation is basic (e.g., letters entered instead of numbers may crash)
- No persistent storage (all data is in-memory)


## How to Build and Run

### Using CMake
```bash
mkdir build
cd build
cmake ..
cmake --build .
