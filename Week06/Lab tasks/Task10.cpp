#include <iostream>
using namespace std;

int main()
{
    string input;

    cout << "Enter a string : ";
    getline(cin, input);

    cout << "Shifted string : ";

    for (int i = 0; i < input.length(); i++)
    {
        char ch = input[i];

        if (ch >= 'a' && ch <= 'z')
        {

            if (ch == 'z')
            {
                cout << 'a';
            }
            else
            {
                cout << (char)(ch + 1);
            }
        }

        else if (ch >= 'A' && ch <= 'Z')
        {

            if (ch == 'Z')
            {
                cout << 'A';
            }
            else
            {
                cout << (char)(ch + 1);
            }
        }
        else
        {
            cout << ch;
        }
    }
}