
#include <iostream>
using namespace std;

main()
{
    int num;
    int digit;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the digit: ";
    cin >> digit;

    for (int i = num; i > 0; i /= 10)
    {
        if (i % 10 == digit)
        {

            count++;
        }
    }

    cout << "Frequency: " << count;
}
