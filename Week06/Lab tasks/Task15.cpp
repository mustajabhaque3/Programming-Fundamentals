#include <iostream>
using namespace std;

int main()
{

    int n;
    int j;
    int firstarr[2];

    cout << "Enter 2 elements for the first array (must be 2) : ";
    cin >> n;

    if (n != 2)
    {
        cout << "Error: You must enter exactly 2 elements." << endl;
    }
    else
    {
        cout << "Enter 2 elements for the first array, one per line : " << endl;
        for (int i = 0; i < 2; i++)
        {
            cin >> firstarr[i];
        }
    }

    cout << "Enter the number of elements for the second array : ";
    cin >> j;
    int secondarr[j];

    cout << "Enter " << j << " elements for the second array, one per line : " << endl;
    for (int i = 0; i < j; i++)
    {
        cin >> secondarr[i];
    }

    int result[102];
    int resultSize = 0;

    // Insert first array's first element
    result[resultSize++] = firstarr[0];

    // Insert entire second array in middle
    for (int i = 0; i < j; i++)
    {
        result[resultSize++] = secondarr[i];
    }

    // Insert first array's second element
    result[resultSize++] = firstarr[1];

    cout << "Resulting array : [";
    for (int i = 0; i < resultSize; i++)
    {
        cout << result[i] << " ";
        if (i < resultSize - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}
