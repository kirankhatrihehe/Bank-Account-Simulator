final_reflection.md
Final Reflection — Bank Account Simulator
Section 1: Project Summary

What is your project?
My project is a Bank Account Simulator written in C++. It allows users to create accounts, deposit money, withdraw money, and view account details. It helped me practice object-oriented programming and C++ project structure.

What features did you implement?

✔ Feature 1: Deposit Money

Users can deposit an amount into an account.

Prevents negative deposits.

Fully functional and tested.

✔ Feature 2: Withdraw Money

Users can withdraw money with safety checks.

Prevents overdraft and invalid withdrawals.

Integrated smoothly with the Bank class.

✔ Feature 3: View Account Details

Users can view account number, owner name, and balance.

Validates invalid account numbers.

Works well with Features 1 and 2.

What does your project do well?

Clean class structure (Account and Bank)

Good input validation

Easy-to-understand menu

Features integrate smoothly together

Section 2: What Remains
Unimplemented features from original plan:

Saving/loading accounts (File I/O)

Listing all accounts

Transfer money between accounts

Better handling of non-numeric input

More advanced banking features (interest, logs)

Remaining bugs or issues:

No persistent data (everything resets when program closes)

Accounts can have duplicate names

Program crashes if letters are entered instead of numbers

Some messages could be more descriptive

What would make the project more complete?

Implement file save/load

Add a “show all accounts” list

Create a transaction history

Add automated tests for all features

Section 3: Time Estimates for Remaining Work
✅ GitHub-friendly table:
Remaining Work	Time Estimate	Priority
File save/load system	2–3 hours	High
List all accounts	1–1.5 hours	Medium
Input validation upgrades	1–2 hours	Must-have
Full automated CTest suite	2 hours	Must-have
Money transfer system	1 hour	Optional
Section 4: What I Learned
Technical skills I learned:

How to design classes with constructors and methods

Separating project files into .h and .cpp

Using vectors in the Bank class to store accounts

Implementing menu-driven interfaces

Writing safer code with input validation

Understanding multi-file C++ compilation

Challenges I faced:

Making the withdraw function handle all cases

Getting Bank::findAccount to work properly

Making sure new features didn’t break old ones

Understanding how to structure test cases

What I would do differently:

Implement file saving earlier

Add stronger validation from the beginning

Write automated tests after each feature

Plan more modular menu functions

Section 5: Time Log
✅ GitHub-friendly table:
Activity	Time Spent
Planning & design	~3 hours
Implementing features	~8–9 hours
Testing & debugging	~4 hours
Documentation & reflection	~2 hours
AI Usage Statement

I used ChatGPT only for general guidance and explanation of concepts.
I did NOT use AI to write my final code, fix code errors, or create my test cases.
All coding, logic, debugging, and implementation decisions were fully done by me.
