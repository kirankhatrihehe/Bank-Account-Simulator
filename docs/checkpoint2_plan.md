# Checkpoint 2: Second Feature Plan

## Feature Name
Withdraw Money

## Description
This feature allows users to withdraw money from an existing bank account. 
It validates the withdrawal amount to ensure the account balance does not go negative and updates the account balance.

## Why This Feature?
I chose this feature because it naturally extends the deposit feature implemented in Checkpoint 1. 
It adds real functionality for managing accounts and demonstrates proper handling of edge cases like overdrafts.

## Classes Involved
- `Account` (updated to include `withdraw` method)
- `Bank` (updated to handle withdrawals for accounts)
- `main.cpp` (updated menu and user interaction for withdrawals)

## Expected User Workflow
1. User selects "Withdraw Money" from the main menu.
2. User enters the account number.
3. User enters the amount to withdraw.
4. Program checks if the account exists and if the balance is sufficient.
5. If valid, the amount is deducted from the account balance and a success message is shown; otherwise, an error message is displayed.

## Estimated Time
Approximately 2–3 hours.
