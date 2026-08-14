#include <iostream>
#include <string>
using namespace std;

// Account information
string accountName;
int accountNumber;
int pin;
double balance = 0;

bool accountCreated = false;

// Function declarations
void createAccount();
bool login();
void atmMenu();
void checkBalance();
void depositMoney();
void withdrawMoney();
void changePin();

int main()
{
    int choice;

    while (true)
    {
        cout << "\n====================================\n";
        cout << "       BANKING & ATM SYSTEM\n";
        cout << "====================================\n";
        cout << "1. Create Account\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "====================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                if (login())
                {
                    atmMenu();
                }
                break;

            case 3:
                cout << "\nThank you for using the system!\n";
                return 0;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }
    }

    return 0;
}


// Create Account
void createAccount()
{
    cout << "\n====================================\n";
    cout << "          CREATE ACCOUNT\n";
    cout << "====================================\n";

    cin.ignore();

    cout << "Enter your name: ";
    getline(cin, accountName);

    cout << "Enter account number: ";
    cin >> accountNumber;

    // PIN validation
    do
    {
        cout << "Create a 4-digit PIN: ";
        cin >> pin;

        if (pin < 1000 || pin > 9999)
        {
            cout << "PIN must be exactly 4 digits.\n";
        }

    } while (pin < 1000 || pin > 9999);


    // Initial balance
    do
    {
        cout << "Enter initial deposit: Rs. ";
        cin >> balance;

        if (balance <= 0)
        {
            cout << "Initial deposit must be greater than 0.\n";
        }

    } while (balance <= 0);


    accountCreated = true;

    cout << "\n====================================\n";
    cout << "     ACCOUNT CREATED SUCCESSFULLY\n";
    cout << "====================================\n";

    cout << "Name           : " << accountName << endl;
    cout << "Account Number : " << accountNumber << endl;
    cout << "Balance        : Rs. " << balance << endl;

    cout << "====================================\n";
}


// Login
bool login()
{
    if (!accountCreated)
    {
        cout << "\nNo account exists.\n";
        cout << "Please create an account first.\n";
        return false;
    }

    int enteredAccount;
    int enteredPin;

    cout << "\n====================================\n";
    cout << "              LOGIN\n";
    cout << "====================================\n";

    cout << "Enter account number: ";
    cin >> enteredAccount;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredAccount == accountNumber && enteredPin == pin)
    {
        cout << "\nLogin successful!\n";
        cout << "Welcome, " << accountName << "!\n";

        return true;
    }
    else
    {
        cout << "\nInvalid account number or PIN.\n";

        return false;
    }
}


// ATM Menu
void atmMenu()
{
    int choice;

    while (true)
    {
        cout << "\n====================================\n";
        cout << "              ATM MENU\n";
        cout << "====================================\n";

        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Change PIN\n";
        cout << "5. Logout\n";

        cout << "====================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                checkBalance();
                break;

            case 2:
                depositMoney();
                break;

            case 3:
                withdrawMoney();
                break;

            case 4:
                changePin();
                break;

            case 5:
                cout << "\nLogging out...\n";
                return;

            default:
                cout << "\nInvalid choice.\n";
        }
    }
}


// Check Balance
void checkBalance()
{
    cout << "\n====================================\n";
    cout << "           ACCOUNT BALANCE\n";
    cout << "====================================\n";

    cout << "Account Number : " << accountNumber << endl;
    cout << "Account Holder : " << accountName << endl;
    cout << "Current Balance: Rs. " << balance << endl;

    cout << "====================================\n";
}


// Deposit Money
void depositMoney()
{
    double amount;

    cout << "\n====================================\n";
    cout << "           DEPOSIT MONEY\n";
    cout << "====================================\n";

    cout << "Enter amount: Rs. ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "\nInvalid amount.\n";
        cout << "Amount must be greater than 0.\n";
        return;
    }

    balance = balance + amount;

    cout << "\nDeposit successful!\n";
    cout << "Deposited: Rs. " << amount << endl;
    cout << "New Balance: Rs. " << balance << endl;
}


// Withdraw Money
void withdrawMoney()
{
    double amount;

    cout << "\n====================================\n";
    cout << "          WITHDRAW MONEY\n";
    cout << "====================================\n";

    cout << "Enter amount: Rs. ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "\nInvalid amount.\n";
        cout << "Amount must be greater than 0.\n";
        return;
    }

    if (amount > balance)
    {
        cout << "\nInsufficient balance.\n";
        cout << "Your balance is: Rs. " << balance << endl;
        return;
    }

    balance = balance - amount;

    cout << "\nWithdrawal successful!\n";
    cout << "Withdrawn: Rs. " << amount << endl;
    cout << "Remaining Balance: Rs. " << balance << endl;
}


// Change PIN
void changePin()
{
    int oldPin;
    int newPin;

    cout << "\n====================================\n";
    cout << "             CHANGE PIN\n";
    cout << "====================================\n";

    cout << "Enter current PIN: ";
    cin >> oldPin;

    if (oldPin != pin)
    {
        cout << "\nIncorrect current PIN.\n";
        return;
    }

    cout << "Enter new 4-digit PIN: ";
    cin >> newPin;

    if (newPin < 1000 || newPin > 9999)
    {
        cout << "\nPIN must be exactly 4 digits.\n";
        return;
    }

    pin = newPin;

    cout << "\nPIN changed successfully!\n";
}
