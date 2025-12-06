# Checkpoint 1 Test Cases

## Feature: Create Account

### Test Setup
- Test file: `tests/test_feature.cpp`
- Build system: CMake with CTest
- Run command: `ctest --verbose`

### Test 1: Normal Operation
- **What it tests**: Creating a bank account with a valid name and positive balance
- **Expected result**: Account is created and added to the bank
- **Result**: ✅ Pass

### Test 2: Edge Case
- **What it tests**: Creating an account with zero balance
- **Expected result**: Account is created successfully
- **Result**: ✅ Pass

### Test 3: Boundary Conditions
- **What it tests**: Creating an account with a negative balance
- **Expected result**: Program handles the input gracefully (either rejects or sets to zero)
- **Result**: ✅ Pass

### CTest Output
