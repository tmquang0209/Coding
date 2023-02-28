#include <iostream>

using namespace std;

int main()
{
    int so;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> so;
        if (so < 0)
            cout << "Nhap lai: ";
    } while (so < 0);
    if (so % 2 == 0)
        cout << "So chan" << endl;
    else
        cout << "So le" << endl;
    return 0;
}