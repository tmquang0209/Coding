#include <iostream>
using namespace std;
int main()
{
    int number, sum = 0;
    cout << "Enter number: ";
    cin >> number;
    while (number < 0)
    {
        cout << "Khong duoc nhap so < 0. Nhap lai: ";
        cin >> number;
    }
    for (int i = 0; i <= number; i++)
    {
        sum += i;
    }
    cout << sum;
}