#include <iostream>
using namespace std;

main()
{
    char character = 'y';
    
    while (character != 'n' && character != 'N')
    {
        cout << "I am Happy" << endl;
        cout << "Enter your choice: ";
        cin >> character;
    }
}