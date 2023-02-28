#include <iostream>
#include <math.h>

using namespace std;
int tinh(int, int, int);
int main()
{
    int i = 10;

    while (true)
    {
        if (i % 5 == 1 && i % 4 == 2)
        {
            cout << i % 20 << endl;
        }
        i++;
    }
}
