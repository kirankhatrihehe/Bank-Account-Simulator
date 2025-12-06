cmake_minimum_required(VERSION 3.10)
project(BankAccountSimulator)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files for the main program
set(SOURCES
    src/main.cpp
    src/Account.cpp
    src/Bank.cpp
)


add_executable(BankSimulator ${SOURCES})

# Enable testing
enable_testing()

# Source files for testing
set(TEST_SOURCES
    tests/test_feature.cpp
    src/Account.cpp
    src/Bank.cpp
)

# Build the test executable
add_executable(test_feature ${TEST_SOURCES})

# Register the test with CTest
add_test(NAME FeatureTests COMMAND test_feature)
