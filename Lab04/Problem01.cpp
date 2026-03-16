#include <iostream>
using namespace std;

main()
{

    string name;
    int discount;
    int ticket;
    int discounted_ticket;

    cout << "Country: ";
    cin >> name;
    cout << "Ticket Price: ";
    cin >> ticket;

    if (name == "Ireland")
    {
        discount = ticket * 0.10;
    }
    else
    {
        discount = ticket * 0.05;
    }

    discounted_ticket = ticket - discount;

    cout << "Discounted Price " << discounted_ticket;
}