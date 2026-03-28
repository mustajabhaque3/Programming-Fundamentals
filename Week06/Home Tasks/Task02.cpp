#include <iostream>
using namespace std;

int main()
{
    int n;
    int evenCount = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[n];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    cout << "Total even numbers: " << evenCount << endl;

    return 0;
}