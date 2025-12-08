Final Reflection — Bank Account Simulator
Section 1: Project Summary

What is your project?
My project is a Bank Account Simulator written in C++. It is a simple, menu-driven banking system that allows users to create accounts, deposit money, withdraw money, and view account details. The goal of the project was to practice object-oriented design, multi-file C++ structure, and implementing features step-by-step across checkpoints.

What features did you implement?

Feature 1: Deposit Money

Users can add money to an account.

Validates inputs and prevents negative deposits.

Fully implemented and tested.

Feature 2: Withdraw Money

Users can withdraw money safely.

Checks if the amount is positive.

Prevents overdraft and handles insufficient balance.

Integrated with the Bank class and tested.

Feature 3: View Account Details

Users can enter an account number to see balance and owner name.

Returns error messages for invalid account numbers.

Integrates smoothly with previous features.

What does your project do well?

Has clean class structure (Account and Bank).

Menu navigation is simple, clear, and user friendly.

Input validation prevents invalid transactions.

Code is consistent and easy to read.

All three features work smoothly together.

Section 2: What Remains

Unimplemented features from original plan:

Saving and loading accounts from a file (File I/O).

Listing all accounts at once.

Transfer money between two accounts.

More advanced menu formatting.

Stronger input validation (e.g., handling letters in number fields).

Bugs / Issues:

No data persistence — accounts reset when program closes.

Multiple accounts can use the same name (not necessarily wrong but can be confusing).

Menu does not stop users from typing letters instead of numbers.

Some error messages could be improved for clarity.

What would make the project “complete”:

A full save/load feature using text or JSON files.

A “show all accounts” table to make the system easier to inspect.

Full CTest-based automated tests for all features.

More polished interface and additional banking features (e.g., transfers, interest).

Section 3: Time Estimates for Remaining Work
Remaining Feature	Time Estimate	Priority
File save/load system	2–3 hours	High
List all accounts	1 hour	Medium
Input validation improvements	1–2 hours	Must-have
Automated tests for all features	2 hours	Must-have
Money transfer feature	1–1.5 hours	Optional
Section 4: What I Learned

Technical Skills Learned:

How to design C++ classes with constructors, getters, and setters.

How to separate code using .h and .cpp files.

Using vectors inside classes to store multiple objects.

Managing interactions between two classes (Bank managing many Account objects).

Creating and testing interactive menu systems.

Handling edge cases like negative numbers, invalid account numbers, and overdrafts.

Hardest Parts:

Making sure withdraw logic didn’t break any existing code.

Ensuring the Bank class handled invalid account lookups safely.

Integrating each new feature into the menu without errors.

Debugging tests and making the logic match expected results.

What I would do differently:

Implement error handling earlier.

Add automated tests immediately after each feature was created.

Start working on file I/O sooner.

Plan a more modular menu system from the beginning.

Section 5: Time Log
Activity	Time Spent
Planning and structure	~3 hours
Coding all three features	~8–9 hours
Manual testing & debugging	~4 hours
Documentation, README, reflections	~2 hours
AI Usage Statement

I used ChatGPT only for general guidance, such as understanding what parts I was missing, how to plan the next step, and how to improve organization.
I did not use AI to write my full code, fix errors, or generate tests.
All implementation, logic, feature integration, and test writing were completed by me.
