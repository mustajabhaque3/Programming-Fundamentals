#include <iostream>
using namespace std;

main()
{
    string n1;
    int a1;
    string n2;
    int a2;
    string n3;
    int a3;

    cout << "Enter name of first Brother : ";
    cin >> n1;
    cout << "Enter age of first Brother : ";
    cin >> a1;
    cout << "Enter name of second Brother : ";
    cin >> n2;
    cout << "Enter age of second Brother : ";
    cin >> a2;
    cout << "Enter name of third Brother : ";
    cin >> n3;
    cout << "Enter age of third Brother : ";
    cin >> a3;

    if(a1 < a2 && a1 < a3){
        cout << n1 << " is the youngest." << endl;
    }else if(a2 < a1 && a2 < a3){
        cout << n2 << " is the youngest." << endl;
    }else if(a3 < a1 && a3 < a2){
        cout << n3 << " is the youngest." << endl;
    }
}