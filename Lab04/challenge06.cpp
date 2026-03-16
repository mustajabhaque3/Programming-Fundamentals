#include <iostream>
using namespace std;

main()
{
    int adv;
    int laptopcalc;
    int req;

    adv = 10000 * 0.5;
    laptopcalc = adv * 6;
    req = 50000 / adv;

    if (laptopcalc == 50000)
    {
        cout << "Yes! yu can buy it.";
    }
    else
    {
        cout << "Months requird to buy a laptop : " << req;
    }
}