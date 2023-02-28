#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int main()
{
    double number1, number2;
    int userChoice;
    bool flag = true;
    srand(time(NULL));
    number1 = rand();
    number2 = rand();
    cout << "So thu nhat: " << number1 << endl;
    cout << "So thu hai: " << number2 << endl;
    do
    {
        cout << "1. Cong" << endl;
        cout << "2. Tru" << endl;
        cout << "3. Nhan" << endl;
        cout << "4. Chia" << endl;
        cout << "5. Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> userChoice;
        switch (userChoice)
        {
        case 1:
            cout << number1 << " + " << number2 << " = " << (number1 + number2) << endl;
            break;
        case 2:
            cout << number1 << " - " << number2 << " = " << (number1 - number2) << endl;
            break;
        case 3:
            cout << number1 << " * " << number2 << " = " << (number1 * number2) << endl;
            break;
        case 4:
            cout << number1 << " / " << number2 << " = " << (number1 / number2) << endl;
            break;
        case 5:
            flag = false;
            cout << "Ban da thuc hien xong!" << endl;
            break;
        default:
            cout << "Lua chon khong hop le" << endl;
            break;
        }
    } while (flag);
}
