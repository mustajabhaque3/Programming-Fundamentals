#include <iostream>
using namespace std;

main()
{
    int num1;
    int num2;

    cout << "Enter first Number : ";
    cin >> num1;

    cout << "Enter second Number : ";
    cin >> num2;

    if (num1 < num2)
    {
        cout << "Number " << num2 << " is Greater Than number " << num1;
    }
    else
    {
        cout << "Number " << num1 << " is Greater Than number " << num2;
    }
}