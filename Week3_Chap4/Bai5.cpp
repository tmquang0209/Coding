#include <iostream>
using namespace std;
int main()
{
    int fee = 2500;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Year " << i << ", fee: " << fee << "$." << endl;
        fee += (fee * 0.04);
    }
}