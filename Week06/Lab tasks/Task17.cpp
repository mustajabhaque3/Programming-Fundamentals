#include <iostream>
using namespace std;

int main()
{
    string argument;

    cout << "Enter argument 'a' : ";
    getline(cin, argument);

    cout << "Result: something " << argument << endl;

    return 0;
}