#include <iostream>
using namespace std;

main()
{
    string my_password;
    string user_password;

    my_password = "pk1234";

    cout << "Enter the Password : ";
    cin >> user_password;

    if (my_password == user_password)
    {
        cout << "WOW ! You have cracked the code !";
    }
    else
    {
        cout << "It's not that simple. Try again !";
    }
}