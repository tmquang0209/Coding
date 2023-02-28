#include <iostream>

using namespace std;

int my_factor(int so, int so2 = -1);

int main()
{
    int so, so2;
    do
    {
        cout << "Nhap so nguyen duong thu nhat: ";
        cin >> so;
        cout << "Nhap so nguyen duong thu hai (nhap -1 de bo qua): ";
        cin >> so2;
    } while (so < 0);
    int tinh;
    if (so2 == -1)
    {
        tinh = my_factor(so);
        if (tinh == -1)
            cout << "Loi phep tinh!";
        else
            cout << so << "! = " << tinh;
    }
    else
    {
        tinh = my_factor(so, so2);
        if (tinh == -1)
            cout << "Loi phep tinh!";
        else
            cout << "Chinh hop = " << tinh;
    }

    return 0;
}

int my_factor(int so, int so2)
{
    int tich = 1;
    if (so2 == -1)
    {
        cout << "hihi";
        for (int i = 1; i <= so; i++)
        {
            tich *= i;
        }
        return tich;
    }
    else
    {
        int tu = 1, mau = 1;
        if (so2 < so)
            return -1; // return lỗi

        for (int i = 1; i <= so2; i++)
            tu *= i;

        for (int i = 1; i <= so2 - so; i++)
            mau *= i;

        return tu / mau;
    }
    return -1;
}