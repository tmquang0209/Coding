#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int year, totalNumOfMonth = 0;
    double amountRain, totalRainFall = 0, averageRainfallPerMonth;
    cout << "Number of year: ";
    cin >> year;
    while (year < 1)
    {
        cout << "So nam nhap khong dung. Vui long thu lai!" << endl;
        cout << "So nam: ";
        cin >> year;
    }

    for (int i = 1; i <= year; i++)
    {
        cout << "===== Nam " << i << " =====" << endl;
        for (int j = 1; j <= 12; j++)
        {
            cout << "Thang " << j << ": ";
            cin >> amountRain;
            totalRainFall += amountRain;
            totalNumOfMonth++;
        }
    }
    averageRainfallPerMonth = totalRainFall / totalNumOfMonth;
    cout << setprecision(2) << fixed;
    cout << "=========================";
    cout << "Tong so thang:           :" << totalNumOfMonth << endl;
    cout << "Tong luong mua:          :" << totalRainFall << endl;
    cout << "Luong mua trung binh     :" << averageRainfallPerMonth << endl;
}