#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void displayMenu();
void doMenu();

int main()
{
    doMenu();
    return 0;
}

void displayMenu()
{
    cout << "1. Tinh thuong \n"
         << "2. Tinh can bac b cua a\n"
         << "0. Thoat"
         << endl;
}

void doMenu()
{
    bool flag = true;
    int choice, a, b;
    cout << setprecision(2) << fixed;
    do
    {
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        do
        {
            cin >> b;
            if (b == 0)
                cout << "Nhap b != 0: ";
        } while (b == 0);

        displayMenu();
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << a << "/" << b << " = " << (double)a / b << endl;
            break;
        case 2:
            cout << "Can bac " << b << " cua " << a << " = " << pow(a, 1.0 / b) << endl;
            break;
        case 0:
            flag = false;
            break;
        default:
            cout << "Lua chon khong hop le" << endl;
            break;
        }
    } while (flag);
}
