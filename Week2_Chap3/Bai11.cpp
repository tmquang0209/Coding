#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
    int number_f, number_s, sum;
    srand(time(0));
    number_f = rand() % 1000 + 100;
    number_s = rand() % 1000 + 100;
    cout << " " << number_f << endl;
    cout << "+" << number_s << endl;
    cout << "-------" << endl;
    cout << "Enter the answer: ", cin >> sum;
    if (sum == number_f + number_s)
    {
        cout << "Congratulation..!";
    }
    else
    {
        cout << "The result is not correct";
    }
    return 0;
}