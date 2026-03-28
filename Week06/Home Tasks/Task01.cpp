#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input array size
    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[n];

    // Input numbers
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int sum = 0;

    // Calculate sum
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    // Print sum
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}