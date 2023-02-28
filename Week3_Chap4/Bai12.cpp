#include <iostream>
using namespace std;
int main()
{
    double degreeF;
    for (int i = 0; i <= 20; i++)
    {
        degreeF = (1.8 * i) + 32;
        cout << i << "*C"
             << " ---> " << degreeF << "*F" << endl;
    }
}