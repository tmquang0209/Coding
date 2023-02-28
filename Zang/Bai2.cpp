#include <iostream>
 
using namespace std;

int main()
{
    int so, tong = 0;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> so;
        if (so < 0)
            cout << "Nhap lai: ";
    } while (so < 0);

    for (int i = 0; i < so; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            tong += i;
        }
    }
    cout << endl;
    for (int i = so - 1; i > 0; i--)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Tong cac so le < " << so << " la " << tong;

    return 0;
}