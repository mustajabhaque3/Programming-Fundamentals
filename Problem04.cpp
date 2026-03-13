
#include <iostream>
using namespace std;

main()
{

    int red_rose;
    int white_rose;
    int tulips;
    int red_p;
    int white_p;
    int tulip_p;
    int total_price;
    int discount;

    cout << "Red Rose: ";
    cin >> red_rose;
    cout << "White Rose: ";
    cin >> white_rose;
    cout << "Tulips: ";
    cin >> tulips;

    red_p = 2 * red_rose;
    white_p = 4.10 * white_rose;
    tulip_p = 2.50 * tulips;

    total_price = red_p + white_p + tulip_p;

    if (total_price > 200)
    {
        discount = total_price * 0.20;
    }

    cout << "Original Price: " << total_price;
    cout << "Price after Discount: " << total_price - discount;
}
