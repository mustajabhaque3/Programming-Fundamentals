#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];        // Original array
    int unique[100];     // Unique numbers array
    int uniqueCount = 0; // Count of unique numbers

    cout << "\nEnter " << n << " numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];

        bool isDuplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Already Entered!" << endl;
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add to unique array
        if (!isDuplicate)
        {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Display unique numbers
    cout << "Unique Numbers Entered : ";
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}