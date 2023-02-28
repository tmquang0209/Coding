#include <iostream>
#include <math.h>
using namespace std;

double inputValue(double);
void presentValue(double, double, double);

int main()
{
    double F, r, n;
    presentValue(F, r, n);
    return 0;
}

double inputValue(double num)
{
    do
    {
        cin >> num;
    } while (num < 0);
    return num;
}

void presentValue(double F, double r, double n)
{
    double P;
    cout << "So tien du kien nhan: ";
    F = inputValue(F);
    cout << "Lai suat (nam): ";
    r = inputValue(r);
    cout << "So nam gui tiet kiem: ";
    n = inputValue(n);
    P = (double)(F / (pow((1 + r / 100), n)));
    cout << "So tien du kien se gui: " << P;
}
