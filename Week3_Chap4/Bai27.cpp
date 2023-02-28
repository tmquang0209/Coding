#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{

    const int _31DAYS = 31,
              _28DAYS = 28,
              _30DAYS = 30;
    int i = 1;

    double sum1 = 0, sum2 = 0, sum3 = 0,
           sum4 = 0, sum5 = 0, sum6 = 0,
           sum7 = 0, sum8 = 0, sum9 = 0,
           sum10 = 0, sum11 = 0, sum12 = 0;
    double step;

    ifstream stepsReader("./FileData/steps.txt");
    while (stepsReader >> step)
    {
        if (i >= 1 && i <= 31)
        {
            sum1 += step;
        }
        if (i >= 32 && i <= 59)
        {
            sum2 += step;
        }
        if (i >= 60 && i <= 90)
        {
            sum3 += step;
        }
        if (i >= 91 && i <= 120)
        {
            sum4 += step;
        }
        if (i >= 121 && i <= 151)
        {
            sum5 += step;
        }
        if (i >= 152 && i <= 181)
        {
            sum6 += step;
        }
        if (i >= 182 && i <= 212)
        {
            sum7 += step;
        }
        if (i >= 213 && i <= 243)
        {
            sum8 += step;
        }
        if (i >= 244 && i <= 273)
        {
            sum9 += step;
        }
        if (i >= 274 && i <= 304)
        {
            sum10 += step;
        }
        if (i >= 305 && i <= 334)
        {
            sum11 += step;
        }
        if (i >= 335 && i <= 365)
        {
            sum12 += step;
        }
        i++;
    }
    stepsReader.close();

    cout << setprecision(2) << fixed;
    cout << "Thang 1: " << sum1 / _31DAYS << endl;
    cout << "Thang 2: " << sum2 / _28DAYS << endl;
    cout << "Thang 3: " << sum3 / _31DAYS << endl;
    cout << "Thang 4: " << sum4 / _30DAYS << endl;
    cout << "Thang 5: " << sum5 / _31DAYS << endl;
    cout << "Thang 6: " << sum6 / _30DAYS << endl;
    cout << "Thang 7: " << sum7 / _31DAYS << endl;
    cout << "Thang 8: " << sum8 / _31DAYS << endl;
    cout << "Thang 9: " << sum9 / _30DAYS << endl;
    cout << "Thang 10: " << sum10 / _31DAYS << endl;
    cout << "Thang 11: " << sum11 / _30DAYS << endl;
    cout << "Thang 12: " << sum12 / _31DAYS << endl;
    return 0;
}