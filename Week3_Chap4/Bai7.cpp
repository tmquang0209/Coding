#include <iostream>
using namespace std;
int main()
{
    long double coin = 1, days, sum = 1;
    do
    {
        cout << "Nhap so ngay lam viec: ";
        cin >> days;
        if (days < 1)
            cout << "So ngay khong hop le, vui long kiem tra lai!" << endl;
    } while (days < 1);

    for (int i = 1; i <= days; i++)
    {
        cout << "Ngay " << i << ": " << coin << endl;
        coin *= 2;
        sum += coin;
    }

    cout << "Tong tien luong: " << (double)sum / 100 << endl;

    return 0;
}