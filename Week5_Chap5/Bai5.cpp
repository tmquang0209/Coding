#include <iostream>

using namespace std;

double inputValue(double);
double fallingDistance(double);

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "T = " << i << ": " << fallingDistance(i) << "m" << endl;
    }
    return 0;
}

double fallingDistance(double sec)
{
    return (double)1 / 2 * 9.8 * sec * sec;
}
