#include <iostream>
using namespace std;
int main()
{
    const float RISE_PER_YEAR = 1.5;
    double seaLevel = 0;
    cout << "Year 0 sea level is: 0mm" << endl;
    for (int i = 1; i <= 25; i++)
    {
        seaLevel += RISE_PER_YEAR;
        cout << "Year " << i << " sea level is: " << seaLevel << "mm" << endl;
    }
}