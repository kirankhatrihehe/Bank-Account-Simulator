cmake_minimum_required(VERSION 3.10)
project(BankSimulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/account.cpp
    src/bank.cpp
)

# Build main executable
add_executable(BankApp ${SOURCES})

# Enable testing
enable_testing()

# Deposit test executable
add_executable(test_deposit tests/test_deposit.cpp src/account.cpp src/bank.cpp)
add_test(NAME DepositTests COMMAND test_deposit)
target_include_directories(test_deposit PRIVATE include)

# Withdraw test executable
add_executable(test_withdraw tests/test_withdraw.cpp src/account.cpp src/bank.cpp)
add_test(NAME WithdrawTests COMMAND test_withdraw)
target_include_directories(test_withdraw PRIVATE include)

# View Account test executable (third feature)
add_executable(test_view_account tests/test_view_account.cpp src/account.cpp src/bank.cpp)
add_test(NAME ViewAccountTests COMMAND test_view_account)
target_include_directories(test_view_account PRIVATE include)

