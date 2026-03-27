#include <iostream>
using namespace std;

int main()
{
    int count;
    int arr[1000];

    cout << "Enter total numbers you wish to enter : ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Enter number : ";
        cin >> arr[i];
    }

    cout << "The entered numbers are : " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << endl;
    }
}