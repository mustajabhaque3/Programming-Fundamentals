
#include <iostream>
using namespace std;

main()
{

    int holidays;
    int working_days;
    int time_for_games;
    int difference_from_norm;
    int hours;
    int minutes;

    cout << "Holidays: ";
    cin >> holidays;

    working_days = 365 - holidays;
    time_for_games = (working_days * 63) + (holidays * 127);
    difference_from_norm = 30000 - time_for_games;

    if (difference_from_norm < 0)
    {
        difference_from_norm = -1 * difference_from_norm;
    }
    hours = difference_from_norm / 60;
    minutes = difference_from_norm % 60;

    if (difference_from_norm >= 0)
    {
        cout << "Tom sleeps well \n";
        cout << hours << " hours and " << minutes << " minutes less for play";
    }
    else
    {
        cout << "Tom will run away \n";
        cout << hours << " hours and " << minutes << " minutes for play";
    }
}
