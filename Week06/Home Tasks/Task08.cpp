#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number of products: ";
    cin >> n;

    int flightnumber[n];
    string destination[n];
    int seatsavailable[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the flight number of flight " << i + 1 << ": ";
        cin >> flightnumber[i];
        cout << "Enter the destination for flight " << flightnumber[i] << " : ";
        cin >> destination[i];
        cout << "Enter the number of seats available for flight " << flightnumber[i] << ": ";
        cin >> seatsavailable[i];
    }

    cout << "\n Flight Information Report :\n";
    cout << "---------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Flight Number: " << flightnumber[i] << " to " << destination[i] << " has " << seatsavailable[i] << " seats available." << "\n";
    }

    cout << "Flights with less than 5 seats available : " << endl;
    for (int i = 0; i < n; i++)
    {
        if (seatsavailable[i] < 5)
        {
            cout << "Flight Number: " << flightnumber[i] << " to " << destination[i] << " has only " << seatsavailable[i] << " seats left!" << "\n";
        }
    }
}