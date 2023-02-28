#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream steps;
    steps.open("./FileData/Steps.txt");
    int stepsPerDay, daysPerMonth;
    for (int month = 1; month <= 12; month++)
    {
        double stepsPerMonth = 0;
        if (month == 2)
            daysPerMonth = 28;
        else if ((month % 2 != 0 && month < 8) || (month % 2 == 0 && month > 7))
            daysPerMonth = 31;
        else
            daysPerMonth = 30;
        for (int day = 1; day <= daysPerMonth; day++)
        {
            steps >> stepsPerDay;
            stepsPerMonth += stepsPerDay;
        }
        stepsPerMonth /= daysPerMonth;
        cout << "Average steps in month " << month << " : " << stepsPerMonth << endl;
    }
    steps.close();
    return 0;
}