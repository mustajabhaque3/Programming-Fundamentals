#include <iostream>
using namespace std;
main()
{
    int n1;
    int n2;
    int result;
    int lcm;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    // HCF or GCD
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            result = i;
        }
    }

    // LCM
    lcm = (n1 * n2) / result;

    cout << "The GCD of " << n1 << " and " << n2 << " is: " << result << endl;
    cout << "The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
}