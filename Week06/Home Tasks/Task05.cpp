#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of customers : ";
    cin >> n;
    string name[n];

    cout << "Enter names of " << n << " customers :\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Customer " << (i + 1) << ": ";
        cin >> name[i];
    }

    char letter;
    int count = 0;
    cout << "\nEnter a letter to search for: ";
    cin >> letter;

    for (int i = 0; i < n; i++)
    {
        if (letter == name[i][0])
        {
            count++;
        }
    }

    cout << "\nNumber of customers whose names start with '" << letter << "': " << count << endl;
}