#include <iostream>
using namespace std;
main()
{    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}