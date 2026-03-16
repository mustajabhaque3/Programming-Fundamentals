
#include <iostream>
using namespace std;

main()
{

    string shape;
    float l;
    float w;
    float area;

    cout << "enter shape";
    cin >> shape;

    if (shape == "square")
    {
        cout << "enter length";
        cin >> l;

        area = l * l;
    }

    if (shape == "rectangle")
    {
        cout << "enter length";
        cin >> l;
        cout << "enter width";
        cin >> w;

        area = l * w;
    }

    if (shape == "circle")
    {
        cout << "enter radius";
        cin >> l;

        area = 3.14 * l * l;
    }

    if (shape == "triangle")
    {
        cout << "enter base";
        cin >> l;
        cout << "enter height";
        cin >> w;

        area = 0.5 * l * w;
    }

    cout << "Area: " << area;
}