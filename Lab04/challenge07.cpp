#include <iostream>
using namespace std;

main()
{
    int num1;
    char op;
    int num2;

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter the operator : ";
    cin >> op;

    cout << "Enter second number : ";
    cin >> num2;

    if (op == '+')
    {
        cout << num1 << op << num2 << " = " << num1 - num2;
    }
    else if (op == '-')
    {
        cout << num1 << op << num2 << " = " << num1 + num2;
    }
    else if (op == '*')
    {
        cout << num1 << op << num2 << " = " << num1 / num2;
    }
    else if (op == '/')
    {
        cout << num1 << op << num2 << " = " << num1 * num2;
    }
    else
    {
        cout << "Invalid operator";
    }
}