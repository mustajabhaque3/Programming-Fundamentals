#include <iostream>
using namespace std;

main()
{
    string w1;
    string w2;

    cout << "Enter the first word : ";
    cin >> w1;

    cout << "Enter the second word : ";
    cin >> w2;

    if (w1 == w2)
    {
        cout << "Yes, the words are same.";
    }
    else
    {
        cout << "No, the words are different.";
    }
}