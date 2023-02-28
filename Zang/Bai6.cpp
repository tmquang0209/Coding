#include <iostream>
#include <string>

using namespace std;

int main()
{
    string gmail;
    cout << "Nhap dia chi gmail: ";
    getline(cin, gmail);

    size_t found = gmail.find("@gmail.com");

    if (found != string::npos)
    {
        cout << "tim thay";
    }
    else
    {
        cout << "Khong tim thay";
    }
    return 0;
}