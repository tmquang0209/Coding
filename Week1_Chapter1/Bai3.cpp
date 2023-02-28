#include <iostream>
using namespace std;
int main()
{
    // taxA: Thue cua 1 tieu bang
    // taxB: Thue cua 1 quan
    double cash, taxA, taxB, total;
    cash = 95.00;
    taxA = (double)4 / 100;
    taxB = (double)2 / 100;
    total = cash * (taxA + taxB);
    cout << total << endl;
    return 0;
}