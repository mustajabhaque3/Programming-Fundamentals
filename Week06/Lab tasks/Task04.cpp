#include <iostream>
using namespace std;

int main()
{
    int number[5];

    for (int count = 0; count < 5; count++)
    {
        cout << "Enter number : " << endl;
        cin >> number[count];
    }

    cout << "THE 1ST element of array is: " << number[0] << endl;
    cout << "The last element of array is: " << number[4] << endl;
}