#include <iostream>
using namespace std;

main()
{
    char character;

    cout << "Enter any character in lower case : ";
    cin >> character;

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        cout << "The character is a vowel.";
    }
    else if (character == 'b' || character == 'c' || character == 'd' || character == 'f' || character == 'g' || character == 'h' || character == 'j' || character == 'k' || character == 'l' || character == 'm' || character == 'n' || character == 'p' || character == 'q' || character == 'r' || character == 's' || character == 't' || character == 'v' || character == 'w' || character == 'x' || character == 'y' || character == 'z')
    {
        cout << "The character is a consonant.";
    }
    else if (character >= 0)
    {
        cout << "The character is a digit.";
    }
    else
    {
        cout << "The character is a special character.";
    }
}