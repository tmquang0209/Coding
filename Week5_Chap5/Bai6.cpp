#include <iostream>
#include <math.h>
using namespace std;

double inputValue(double);
double inputKg(double);
double inputSpeed(double);
double kineticEnergy(double, double);

int main()
{
	double kg, speed, KE;
	kg = inputKg(kg);
	speed = inputSpeed(speed);
	KE = kineticEnergy(kg, speed);
	cout << "Dong nang = " << KE << " J" << endl;
	return 0;
}

double inputValue(double num)
{
	do
	{
		cin >> num;
		if (num < 0)
		{
			cout << "Loi! Nhap so > 0." << endl;
		}
	} while (num < 0);
	return num;
}

double inputKg(double kg)
{
	cout << "Khoi luong: ";
	kg = inputValue(kg);
	return kg;
}

double inputSpeed(double speed)
{
	cout << "Van toc: ";
	speed = inputValue(speed);
	return speed;
}

double kineticEnergy(double kg, double speed)
{
	return (double)(0.5 * kg * pow(speed, 2));
}
