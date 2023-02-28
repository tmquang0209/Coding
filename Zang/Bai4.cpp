#include <iostream>

using namespace std;

int my_factor(int so);

int main()
{
    int so;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> so;
    } while (so < 0);
    int giaithua = my_factor(so);
    cout << so << "! = " << giaithua << endl;
    return 0;
}

int my_factor(int so)
{
    int tich = 1;
    for (int i = 1; i <= so; i++)
    {
        tich *= i;
    }
    return tich;
}