#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number of products: ";
    cin >> n;

    string productnames[n];
    float prices[n];
    float quantity[n];
    float total[n];
    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of product " << i + 1 << ": ";
        cin >> productnames[i];
        cout << "Enter the price of " << productnames[i] << ": $";
        cin >> prices[i];
        cout << "Enter the quantity of " << productnames[i] << ": ";
        cin >> quantity[i];
        total[i] = prices[i] * quantity[i];
    }

    cout << "\n Product Inventory Report :\n";
    cout << "-------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << productnames[i] << " : " << "$" << prices[i] << ", " << quantity[i] << " in stock , Total value : $" << total[i] << "\n";
    }
}