#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of chords: ";
    cin >> n;
    cin.ignore();

    string chords[n];

    cout << "Enter " << n << " chords:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Chord " << (i + 1) << ": ";
        getline(cin, chords[i]);
    }

    cout << "jazzified chords : [";
    for (int i = 0; i < n; i++)
    {
        if (chords[i].length() > 0 && chords[i][chords[i].length() - 1] == '7')
        {
            cout << chords[i];
        }
        else
        {
            chords[i] += "7";
            cout << chords[i];
        }

        if (i < n - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}