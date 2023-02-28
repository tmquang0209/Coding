/*
Viết một chương trình chuyển đổi giá trị giữa hai đơn vị đo nhiệt độ là Celsius và
Fahrenheit
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double celsius, fahrenheit;
    cout << "Nhap vao do C: ";
    cin >> celsius;
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    cout << "---> Do F: " << fahrenheit << endl;

    cout << "Nhap do F: ";
    cin >> fahrenheit;
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    cout << "---> Do C: " << celsius << endl;

    return 0;
}