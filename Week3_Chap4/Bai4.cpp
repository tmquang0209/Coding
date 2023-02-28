#include <iostream>
using namespace std;
int main()
{
    int minutes = 0;
    double calories = 0;
    cout << "Initial calories: 0" << endl;
    for (int i = 5; i <= 30; i += 5)
    {
        calories = 3.6 * i;
        cout << "After " << i << " minutes calories burned: " << calories << " cal." << endl;
    }
}