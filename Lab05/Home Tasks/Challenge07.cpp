
#include <iostream>
using namespace std;

main()
{
    int length;
    int num1 = 0;
    int num2 = 1;
    int next;

    cout << "Enter length of the fibonacci series: ";
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        cout << num1 << "  ";
        next = num1 + num2;
        num1 = num2;
        num2 = next;
    }
}
