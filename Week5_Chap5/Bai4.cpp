#include <iostream>
#include <string.h>

using namespace std;

int getNamAccidents(string);
int inputValue(int);
void findLowest(int, int, int, int, int);

int main()
{
	int East, West, South, North, Center;
	East = getNamAccidents("Dong");
	West = getNamAccidents("Tay");
	South = getNamAccidents("Nam");
	North = getNamAccidents("Bac");
	Center = getNamAccidents("Trung tam");
	findLowest(East, West, South, North, Center);
	return 0;
}

int inputValue(int num)
{
	cin >> num;
	return num;
}

int getNamAccidents(string name)
{
	int accident;
	do
	{
		cout << "Tai nan khu vuc " << name << " : ";
		accident = inputValue(accident);
		if (accident < 0)
		{
			cout << "Loi! Nhap so > 0." << endl;
		}
	} while (accident < 0);
	return accident;
}

void findLowest(int East, int West, int South, int North, int Center)
{
	int Lowest;
	if (North < South &&
		North < East &&
		North < West &&
		North < Center)
	{
		Lowest = North;
		cout << "Bac ";
	}
	else if (South < North &&
			 South < East &&
			 South < West &&
			 South < Center)
	{
		Lowest = South;
		cout << "Nam ";
	}
	else if (East < North &&
			 East < South &&
			 East < West &&
			 East < Center)
	{
		Lowest = East;
		cout << "Dong ";
	}
	else if (West < North &&
			 West < East &&
			 West < South &&
			 West < Center)
	{
		Lowest = West;
		cout << "Tay ";
	}
	else
	{
		Lowest = Center;
		cout << "Trung tam ";
	}

	cout << "co so tai nan it nhat (" << Lowest << ").";
}
