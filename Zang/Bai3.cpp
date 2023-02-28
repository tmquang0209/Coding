#include <iostream>

using namespace std;

int main()
{
    double so, tong = 0;

    do
    {
        cout << "Nhap vao 1 so: ";
        cin >> so;
        tong += so;
        cout << "Tong cac so da nhap la: " << tong << endl;
    } while (tong != 0);
    return 0;
}