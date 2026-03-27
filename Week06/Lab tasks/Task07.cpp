#include <iostream>
using namespace std;

int main()
{
    string word;
    char letter;
    bool isFound = false;

    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter a letter to search for: ";
    cin >> letter;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letter)
        {
            isFound = true;
            break;
        }
    }

    if (isFound)
    {
        cout << "The letter '" << letter << "' is found in the word '" << word << "'." << endl;
    }
    else
    {
        cout << "The letter '" << letter << "' is not found in the word '" << word << "'." << endl;
    }

    return 0;
}