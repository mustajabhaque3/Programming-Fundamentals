#include <iostream>
using namespace std;

main()
{
    float bill;
    float dbill;

    cout << "Enter your bill : ";
    cin >> bill;

    if (bill <= 5000)
    {
        dbill = bill - (bill * 0.05);
        cout<<"Your discounted bill is : "<<dbill;
    }
    else
    {
        dbill = bill - (bill * 0.1);
        cout<<"Your discounted bill is : "<<dbill;
    }
}