/*
A painting company has determined that for every 110 square feet of wall space,
one gallon of paint and eight hours of labor will be required. The company charges
$25.00 per hour for labor. Write a modular program that allows the user to enter
the number of rooms that are to be painted and the price of the paint per gallon. It
should also ask for the square feet of wall space in each room. It should then display
the following data:
• The number of gallons of paint required
• The hours of labor required
• The cost of the paint
• The labor charges
• The total cost of the paint job
Input validation: Do not accept a value less than 1 for the number of rooms. Do not
accept a value less than $10.00 for the price of paint. Do not accept a negative value
for square footage of wall space.
*/

#include <iostream>
using namespace std;

double inputValidate(double, double);
void calcAndDisplay(double, double, double);

int main()
{
    const double CHARGE_PER_HOUR = 25.00;
    double numRooms,
        squareFeet,
        pricePerGallon,
        totalGallons,
        totalLabor,
        totalCost;
    cout << "Nhap so phong can son: ";
    numRooms = inputValidate(numRooms, 1);
    cout << "Nhap gia tien moi binh son: ";
    pricePerGallon = inputValidate(pricePerGallon, 10.00);
    for (int i = 1; i <= (int)numRooms; i++)
    {
        cout << "Nhap dien tich phong #" << i << ": ";
        squareFeet += inputValidate(squareFeet, 0);
    }
    calcAndDisplay(numRooms, squareFeet, pricePerGallon);
    return 0;
}

double inputValidate(double number, double condiction)
{
    while (!(cin >> number) || number < condiction)
    {
        cout << "So nhap khong dung. Vui long nhap lai: ";
    }
    return number;
}

void calcAndDisplay(double numRooms, double squareFeet, double pricePerGallon)
{
    const double GALLONS_PER_SQ_FT = 110.0,
                 WORKING_HOURS_PER_GALLON = 8.0,
                 CHARGE_PER_HOUR = 25.0;
    double totalGallons,
        totalLabor,
        totalCost,
        totalPaint,
        laborCharge;
    totalGallons = squareFeet / 110;
    totalLabor = totalGallons * WORKING_HOURS_PER_GALLON;
    totalPaint = pricePerGallon * totalGallons;
    laborCharge = totalLabor * CHARGE_PER_HOUR;
    totalCost = laborCharge + totalPaint;
    cout << endl
         << endl;
    cout << "Tong so feet vuong can son              : " << squareFeet << endl;
    cout << "Gia moi gallon                          : " << pricePerGallon << endl;
    cout << "Tong so gallons can de son              : " << totalGallons << endl;
    cout << "Tong so gio lam viec can de son         : " << totalLabor << endl;
    cout << "Tong so tien son                        : $" << totalPaint << endl;
    cout << "Tong so tien lam viec                   : $" << laborCharge << endl;
    cout << "Tong so tien can de son                 : $" << totalCost << endl;
}