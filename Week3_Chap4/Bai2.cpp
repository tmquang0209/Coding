#include <iostream>
using namespace std;
int main()
{
    char ascii;
    for (int i = 0; i <= 127; i++)
    {
        ascii = i;
        cout << ascii << " ";
        if (i % 16 == 0)
            cout << endl;
    }
}