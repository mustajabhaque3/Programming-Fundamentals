#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int quarters, dimes, nickels, pennies;
    float totalDue;

    // Input: [quarters, dimes, nickels, pennies], totalDue
    cout << "Enter coin counts [quarters, dimes, nickels, pennies]:\n";
    cout << "Enter quarters : ";
    cin >> quarters;
    cout << "Enter dimes : ";
    cin >> dimes;
    cout << "Enter nickels : ";
    cin >> nickels;
    cout << "Enter pennies : ";
    cin >> pennies;

    cout << "\nEnter total due ($): $";
    cin >> totalDue;

    // Convert totalDue to cents (avoid floating point precision)
    float dueInCents = (totalDue * 100 + 0.5);

    // Calculate total money available in cents
    int totalAvailable = (quarters * 25) +
                         (dimes * 10) +
                         (nickels * 5) +
                         pennies;

    // Check if you can pay
    cout << fixed << setprecision(2);
    cout << "\nTotal Due: $" << totalDue << endl;
    cout << "Total Available: $" << (totalAvailable / 100.0) << endl;

    if (totalAvailable >= dueInCents)
    {
        cout << "Can you pay the amount due? Yes!" << endl;
    }
    else
    {
        cout << "Can you pay the amount due? No!" << endl;
    }

    return 0;
}