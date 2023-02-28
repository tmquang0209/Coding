#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double);

int main()
{
    cout << setprecision(2);
    for (int i = 0; i <= 20; i++)
    {
        cout << "F = " << i << ":\t " << celsius(i) << "C" << endl;
    }
    return 0;
}

double celsius(double degreeF)
{
    return (double)5 / 9 * (degreeF - 32);
}
