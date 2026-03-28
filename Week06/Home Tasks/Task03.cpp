#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n == 0)
    {
        cout << "\nArray is empty!\n" << endl;
        return 0;
    }

    int numbers[n];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int smallest = numbers[0];
    int largest = numbers[0];

    for (int i = 1; i < n; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    cout << "\nSmallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;
}