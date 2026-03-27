#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    cout << "Enter 1st number : " << endl;
    cin >> numbers[0];
    cout << "Enter 2nd number : " << endl;
    cin >> numbers[1];
    cout << "Enter 3rd number : " << endl;
    cin >> numbers[2];
    cout << "Enter 4th number : " << endl;
    cin >> numbers[3];
    cout << "Enter 5th number : " << endl;
    cin >> numbers[4];

    cout << "THE 1ST element of array is: " << numbers[0] << endl;
    cout << "The last element of array is: " << numbers[4] << endl;
}