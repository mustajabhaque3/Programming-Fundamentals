#include <iostream>
using namespace std;

main()
{
    int num;

    cout << "Please Enter the Number : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }
}