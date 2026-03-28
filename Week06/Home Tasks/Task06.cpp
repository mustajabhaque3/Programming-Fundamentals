#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input number of students
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore(); // Clear newline character

    // Declare string array
    string names[100];

    // Input names
    cout << "\nEnter " << n << " student names:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << (i + 1) << ": ";
        getline(cin, names[i]); // Read full name with spaces
    }

    // Simple Bubble Sort for alphabetical order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (names[j] > names[j + 1])
            {
                // Swap names
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    // Display sorted names
    cout << "\nNames in Alphabetical Order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << (i + 1) << ". " << names[i] << endl;
    }

    return 0;
}