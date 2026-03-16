#include <iostream>
using namespace std;

int main()
{
    int pin, choice;
    double balance = 5000.00;
    bool loginSuccess = false;

    //  PIN Verification - 3 attempts using FOR loop
    cout << "=== ATM MANAGEMENT SYSTEM ===" << endl;
    cout << "Enter PIN (3 attempts):" << endl;

    for (int attempt = 1; attempt <= 3; attempt++)
    {
        cout << "Attempt " << attempt << ": ";
        cin >> pin;

        //  Check PIN
        if (pin == 1234)
        {
            loginSuccess = true;
            cout << "Login Successful!" << endl
                 << endl;
            break;
        }
        else
        {
            cout << "Incorrect PIN!" << endl;
            if (attempt < 3)
            {
                cout << "Attempts remaining: " << (3 - attempt) << endl;
            }
            else
            {
                cout << "Account Locked! Contact Bank." << endl;
            }
        }
    }

    // Main ATM Menu - (Only if login is successful)
    if (loginSuccess)
    {
        while (true)
        {
            //  Display ATM Menu
            cout << "\n=== ATM MENU ===" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter choice (1-4): ";
            cin >> choice;

            //  Menu Options using if-else statements
            if (choice == 1)
            {
                // Check Balance
                cout << "\nCurrent Balance: Rs " << balance << endl;
            }
            else if (choice == 2)
            {
                // Deposit Money
                double deposit;
                cout << "\nEnter deposit amount: Rs ";
                cin >> deposit;

                if (deposit > 0)
                { // Logical condition
                    balance += deposit;
                    cout << "Deposited Rs " << deposit << endl;
                    cout << "New Balance: Rs " << balance << endl;
                }
                else
                {
                    cout << "Invalid amount!" << endl;
                }
            }
            else if (choice == 3)
            {
                // Withdraw Money
                double withdraw;
                cout << "\nEnter withdraw amount: Rs ";
                cin >> withdraw;

                // Check sufficient balance
                if (withdraw > 0 && withdraw <= balance)
                {
                    balance -= withdraw;
                    cout << "Withdrawn Rs " << withdraw << endl;
                    cout << "New Balance: Rs " << balance << endl;
                }
                else if (withdraw > balance)
                {
                    cout << "Insufficient Balance!" << endl;
                }
                else
                {
                    cout << "Invalid amount!" << endl;
                }
            }
            else if (choice == 4)
            {
                // Exit
                cout << "\nThank you for using ATM!" << endl;
                cout << "Visit Again!" << endl;
                break;
            }
            else
            {
                cout << "Invalid choice! Please select 1-4." << endl;
            }
        }
    }

    cout << "\nProgram Terminated." << endl;
    return 0;
}