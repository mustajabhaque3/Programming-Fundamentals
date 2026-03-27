#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    float avg = 0;
    int num[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        sum += num[i];
    }

    avg = sum / 5;
    
    cout << "Sum : " << sum << endl;
    cout << "Average : " << avg << endl;

}