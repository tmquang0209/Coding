#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail();

int main()
{
    double retailPrice;
    retailPrice = calculateRetail();
    cout << fixed << setprecision(2);
    cout << "Gia ban le ($): " << retailPrice << endl;
    return 0;
}

double calculateRetail()
{
    double wholesalePrices, retailPercent;
    do
    {
        cout << "Nhap gia ban buon: ";
        cin >> wholesalePrices;
        if (wholesalePrices < 0)
        {
            cout << "Loi! Vui long nhap so > 0." << endl;
        }
    } while (retailPercent < 0);
    do
    {
        cout << "Nhap chiet khau: ";
        cin >> retailPercent;
        if (retailPercent < 0)
        {
            cout << "Loi! Nhap so > 0." << endl;
        }
    } while (retailPercent < 0);
    return wholesalePrices * (1 + retailPercent / 100);
}