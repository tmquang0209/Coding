#include <iostream>
#include <string>

using namespace std;

int decToBin(int);

int main()
{
    int decimal, binary;
    cout << "Nhap so thap phan: ";
    cin >> decimal;
    binary = decToBin(decimal);
    cout << "Ma nhi phan cua " << decimal << " : " << binary;
    return 0;
}

int decToBin(int decimal)
{
    int binary = 0, remainder, product = 1;

    while (decimal != 0)
    {
        remainder = decimal % 2;
        // cout << remainder << " ";
        binary = binary + (remainder * product);
        cout << binary << " ";
        decimal = decimal / 2;
        product *= 10;
    }
    return binary;
}