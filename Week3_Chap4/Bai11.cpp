#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double numCreatures, days, averageIncrease;
    cout << "So luong sinh vat ban dau: ";
    cin >> numCreatures;
    while (numCreatures < 2)
    {
        cout << "So luong sinh vat ban dau khong hop le, vui long nhap lai: ";
        cin >> numCreatures;
    }

    cout << "Muc tang trung binh hang ngay: ";
    cin >> averageIncrease;
    while (averageIncrease < 0)
    {
        cout << "Muc tang trung binh hang ngay khong hop le, vui long nhap lai: ";
        cin >> averageIncrease;
    }

    cout << "So ngay: ";
    cin >> days;
    while (days < 1)
    {
        cout << "So ngay khong hop le, vui long nhap lai: ";
        cin >> days;
    }

    for (int i = 1; i <= days; i++)
    {
        cout << "Ngay " << i << ": " << numCreatures << endl;
        numCreatures += numCreatures * averageIncrease / 100;
    }
}