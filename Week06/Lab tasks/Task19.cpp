#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    bool isSpecial = true;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 != 0)
        {
            isSpecial = false;
            break;
        }
        else if (i % 2 == 1 && arr[i] % 2 == 0)
        {
            isSpecial = false;
            break;
        }
    }

    if (isSpecial)
    {
        cout << "The array is special." << endl;
    }
    else
    {
        cout << "The array is not special." << endl;
    }

    return 0;
}