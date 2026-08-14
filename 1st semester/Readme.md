# 🏧  Banking & ATM Simulator

A simple **console-based Banking & ATM Simulator written in C++**.

This project was created as a **Programming Fundamentals project** to practice basic C++ concepts such as variables, functions, conditional statements, loops, switch statements, and input validation.



---

## 📌 Project Overview

The  Banking & ATM Simulator allows a user to create a basic bank account and perform common ATM operations.

The program provides a simple menu-driven interface where the user can:

* Create an account
* Login using an account number and PIN
* Check account balance
* Deposit money
* Withdraw money
* Change PIN
* Logout

The project focuses on keeping the implementation simple and understandable for a beginner C++ student.

---

## ✨ Features

### 👤 Account Creation

The user can create an account by providing:

* Name
* Account number
* 4-digit PIN
* Initial deposit

The program validates the PIN and initial deposit before creating the account.

### 🔐 Login

The user must enter the correct:

* Account number
* PIN

to access the ATM menu.

### 💰 Check Balance

The user can view:

* Account number
* Account holder name
* Current balance

### 💵 Deposit Money

Users can deposit money into their account.

The program prevents deposits of zero or negative amounts.

### 💸 Withdraw Money

Users can withdraw money from their account.

The program checks:

* Whether the amount is greater than zero
* Whether the account has enough balance

### 🔑 Change PIN

The user can change their PIN after entering the current PIN.

The new PIN must contain exactly 4 digits.

### 🚪 Logout

The user can safely leave the ATM menu and return to the main menu.

---

## 🧠 C++ Concepts Used

This project was built using fundamental C++ concepts:

* Variables
* Data types
* `string`
* Input and output
* `if / else`
* `switch`
* `while` loops
* `do-while` loops
* Functions
* Function return values
* Basic input validation

No database, GUI, networking, or advanced object-oriented programming is used.

---

## 📂 Project Structure

```text
  Banking-ATM/
│
├── task.cpp
└── README.md
```

### `task.cpp`

Contains the complete source code for the Banking & ATM Simulator.

### `README.md`

Contains the documentation and information about the project.


## 🖥️ Main Menu

When the program starts, the following menu is displayed:

```text
====================================
       BANKING & ATM SYSTEM
====================================
1. Create Account
2. Login
3. Exit
====================================
```

After logging in:

```text
====================================
              ATM MENU
====================================
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Change PIN
5. Logout
====================================
```

---

## 🔄 Program Flow

```text
Start
  │
  ▼
Main Menu
  │
  ├── Create Account
  │       │
  │       ▼
  │   Account Created
  │
  ├── Login
  │       │
  │       ▼
  │    Verify PIN
  │       │
  │       ▼
  │    ATM Menu
  │       │
  │       ├── Check Balance
  │       ├── Deposit
  │       ├── Withdraw
  │       ├── Change PIN
  │       └── Logout
  │
  └── Exit
```

---

## ⚠️ Current Limitations

This is a beginner-level educational project, so it has some limitations:

* Only one account can be created during a program session.
* Account information is not stored permanently.
* Data is lost when the program is closed.
* There is no database.
* The PIN is not encrypted.
* It does not represent a real banking security system.

These limitations are intentional because the project focuses on **Programming Fundamentals** rather than advanced software development.

---

## 🚀 Possible Future Improvements

The project can be expanded as more C++ concepts are learned.

Possible future improvements include:

* Multiple user accounts
* File handling for permanent data storage
* Transaction history
* Mini statements
* Account deletion
* Account search
* Better input validation
* Improved security
* Object-oriented programming
* Database integration
* Graphical user interface

---

## 🎓 Learning Purpose

This project was created to practice applying basic C++ programming concepts to a practical problem.

The main goal was to understand how:

* Functions can divide a program into smaller tasks
* Conditions can validate user actions
* Loops can keep menus running
* Switch statements can handle menu choices
* Variables can store account information
* Input validation can prevent invalid transactions

---



