#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int floors, numRoom = 0, totalUsedRoom = 0;
    double usedRoom = 0, totalRoom = 0;

    cout << "Nhap so tang: ";
    cin >> floors;
    while (floors < 0)
    {
        cout << "So tang khong hop le, vui long nhap lai: ";
        cin >> floors;
    }
    for (int i = 1; i <= floors; i++)
    {
        if (i == 13)
            continue;
        cout << "Nhap so phong trong tang " << i << ": ";
        do
        {
            cin >> numRoom;
            if (numRoom < 10)
                cout << "So phong khong hop le, vui long nhap lai: ";
        } while (numRoom < 10);
        totalRoom += numRoom;
        cout << "Nhap so phong da su dung trong tang " << i << ": ";
        cin >> usedRoom;
        totalUsedRoom += usedRoom;
    }
    cout << setprecision(2) << fixed;
    cout << "===================================";
    cout << "Tong so phong:            " << totalRoom << endl;
    cout << "Tong so phong da su dung: " << totalUsedRoom << endl;
    cout << "Tong so phong con lai:    " << totalRoom - totalUsedRoom << endl;
    cout << "Ty le phong co nguoi:     " << (double)totalUsedRoom / totalRoom * 100 << "%" << endl;
    return 0;
}