#include <iostream>
using namespace std;

int main()
{
    string name[5];

    cout << "Enter names of 5 students :\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << (i + 1) << ": ";
        getline(cin, name[i]);
    }

    cout << "\nNames of students :\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << (i + 1) << ": " << name[i] << endl;
    }
    return 0;
}