#include <iostream>
using namespace std;

int main()
{

    int n;
    float TR = 0.0;
    float resistance[100];

    cout << "Enter the number of resistors in the series circuit : ";
    cin >> n;

    cout << "Enter resistance values of " << n << " resistors, one per line : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> resistance[i];
        TR += resistance[i];
    }

    cout << "Total resistance of the series circuit is : " << TR << " ohms" << endl;
    return 0;
}