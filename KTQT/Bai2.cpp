#include <iostream>
#include <fstream>

using namespace std;

const int COL = 5;

void NhapDiem(float[][COL], int);
float TimMin(float[][COL], int);
float TinhTB(float[][COL], int, int option = 0);
void InDiemTB(float[][COL], int);
void input(float &);
void input(int &);

int main()
{
    int n;
    cout << "Nhap so sinh vien can nhap diem: ";
    input(n);
    float listStudent[n][COL];
    NhapDiem(listStudent, n);

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Diem thap nhat cua SV #" << i + 1 << ": " << TimMin(listStudent, i) << endl;
    }
    cout << endl;
    InDiemTB(listStudent, n);
}

void NhapDiem(float listStudent[][COL], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap diem cua sinh vien thu " << i + 1 << ": " << endl;
        for (int j = 0; j < COL; j++)
        {
            cout << "Diem thu " << j + 1 << ": ";
            input(listStudent[i][j]);
        }
    }
}

float TimMin(float listStudent[][COL], int row)
{
    float min = listStudent[row][0];

    for (int j = 0; j < COL; j++)
    {
        if (listStudent[row][j] < min)
            min = listStudent[row][j];
    }

    return min;
}

float TinhTB(float listStudent[][COL], int row, int option)
{
    float sum = 0;
    for (int j = 0; j < COL; j++)
    {
        sum += listStudent[row][j];
    }
    int limit = 5;
    if (option == 1)
    {
        sum -= TimMin(listStudent, row);
        limit = 4;
    }
    return sum / limit;
}

void InDiemTB(float listStudent[][COL], int row)
{
    ofstream writeFile;
    writeFile.open("DiemTB.txt");

    for (int i = 0; i < row; i++)
    {
        cout << "Diem trung binh cua sinh vien thu " << i + 1 << " la: " << TinhTB(listStudent, i) << endl;
        writeFile << i + 1 << "\t\t" << TinhTB(listStudent, i, 1) << endl;
    }
    writeFile.close();
}

void input(int &value)
{
    while (!(cin >> value) || value <= 0)
    {
        cout << "Nhap so >= 0: ";
    }
}

void input(float &value)
{
    while (!(cin >> value) || value < 0 || value > 10)
    {
        cout << "Nhap so trong khoang [0-10]: ";
    }
}