# ⚠️ Exception Handling in C++

## 🎯 Aim
To study and implement exception handling in C++, using `try`, `catch`, and `throw` to manage runtime errors gracefully.

---

## 📚 Theory

**Exception**: An unexpected event or error that occurs during program execution (e.g., division by zero, invalid input, file not found).

**Exception Handling**: A mechanism in C++ to detect and manage runtime errors without abruptly terminating the program.

### 🔑 Key Concepts

- `try` block → Contains code that may throw an exception.
- `throw` statement → Used to signal (raise) an exception.
- `catch` block → Handles the exception thrown by `throw`.

---

## ⚙️ Flow of Exception Handling

1. Code inside the `try` block is executed.
2. If an error occurs, the `throw` statement raises an exception.
3. The program looks for a matching `catch` block.
4. If found, the exception is handled; otherwise, the program terminates.

---

## 📋 Algorithms

### 🧾 Division by Zero

**Steps**:
- Start
- Input two numbers: numerator and denominator.
- Place the division operation inside a `try` block.
- If denominator = 0 → `throw` an exception.
- If denominator ≠ 0 → perform division and display result.
- In the `catch` block:
  - Display error message “Denominator cannot be zero.”
- End

**Output**:
Enter two numbers:
4

9 

Division is: 0.444444


---

### 🧾 Age Validation

**Steps**:
- Start
- Input age from the user.
- Place validation inside a `try` block.
- If age < 0 → `throw` age.
- Else if age < 18 → `throw` age.
- Else → display “Accepted”.
- In the `catch` block:
  - If age < 0 → display “Invalid age”.
  - Else → display “You are below 18”.
- End

**Output**:

Enter your age: 19 

Accepted

Enter your age: 8

You are below 18


---

### 🧾 ATM Transaction System

**Steps**:
- Start
- Initialize ATM with a default balance.
- Display menu:
  - Check Balance
  - Deposit Money
  - Withdraw Money
  - Exit
- Input user choice.
- Place operations inside a `try` block:
  - Case 1: Display balance.
  - Case 2: Input deposit amount.
    - If amount ≤ 0 → `throw` exception.
    - Else add to balance.
  - Case 3: Input withdrawal amount.
    - If amount ≤ 0 → `throw` exception.
    - If amount > balance → `throw` exception.
    - Else deduct from balance.
  - Case 4: Exit program.
  - Default: Display “Invalid choice”.
- In the `catch` block:
  - Display the error message received.
- Repeat until user chooses Exit.
- End

**Output**:

Choose an option:

Check Balance

Deposit Money

Withdraw Money

Exit

Enter your choice: 2

Enter amount to deposit: ₹670000

₹670000 deposited successfully

. Your current balance is: ₹5.67e+06

Enter your choice: 3 

Enter amount to withdraw: ₹50000

₹50000 withdrawn successfully. 

Your current balance is: ₹5.62e+06


---

## 🚀 Applications of Exception Handling

- Prevents abrupt program termination.
- Separates error-handling logic from normal code.
- Improves program reliability and robustness.

**Used in**:
- File I/O operations  
- Database connections  
- Network programming  
- Input validation  
- Banking/ATM systems

---

## 🧠 Conclusion

Exception handling in C++ provides a structured way to manage runtime errors.  
The keywords `try`, `throw`, and `catch` are used to detect and handle exceptions.  
It ensures that programs can continue execution gracefully even when unexpected errors occur.  
Exception handling is essential for building robust, user-friendly applications.



