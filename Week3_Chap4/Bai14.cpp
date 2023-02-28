#include <iostream>
using namespace std;
int main()
{
    int numStudent, count = 0;
    string nameStudent, topStudent, lastStudent;
    cout << "Nhap so luong HS (1-25): ";
    cin >> numStudent;
    while (numStudent < 1 || numStudent > 25)
    {
        cout << "Nhap so luong HS (1-25): ";
        cin >> numStudent;
    }
    cout << "Nhap ten hoc sinh #1: ";
    cin >> nameStudent;
    topStudent = lastStudent = nameStudent;

    if (nameStudent < topStudent)
    {
        topStudent = nameStudent;
    }

    if (nameStudent > lastStudent)
    {
        lastStudent = nameStudent;
    }
    for (int i = 2; i <= numStudent; i++)
    {
        cout << "Nhap ten hoc sinh #" << i << ": ";
        cin >> nameStudent;
        if (nameStudent < topStudent)
        {
            topStudent = nameStudent;
        }

        if (nameStudent > lastStudent)
        {
            lastStudent = nameStudent;
        }
    }
    cout << "================================" << endl;
    cout << "Dung dau tien: " << topStudent << endl;
    cout << "Dung cuoi cung: " << lastStudent << endl;
}