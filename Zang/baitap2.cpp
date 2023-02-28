#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void openFile(string, string);
void writeFile(string, int, int, int, int);
int countEven(string);
int sumFirstN(string, int);
int sumLastN(string, int);

int main()
{
    string fileDoc, fileGhi;
    cout << "Nhap ten file doc: ";
    cin >> fileDoc;
    cout << "Nhap ten file ghi: ";
    cin >> fileGhi;

    openFile(fileDoc, fileGhi);

    int num;

    cout << "Nhap so nguyen n: ";
    while (!(cin >> num) || num < 0)
    {
        cout << "Nhap lai: ";
    }

    int demChan = countEven(fileDoc);
    int tongNDau = sumFirstN(fileDoc, num);
    int tongNcuoi = sumLastN(fileDoc, num);

    // cout << demChan;
    writeFile(fileGhi, num, demChan, tongNDau, tongNcuoi);

    return 0;
}

void openFile(string fileDoc, string fileGhi)
{
    ifstream moFileDoc;
    ofstream moFileGhi;

    moFileDoc.open(fileDoc);
    moFileGhi.open(fileGhi);

    if (moFileDoc.is_open() && moFileGhi.is_open())
    {
        cout << "Good" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }
}

int countEven(string nameFileDoc)
{
    ifstream fileDoc;
    int dem = 0;

    fileDoc.open(nameFileDoc);

    if (fileDoc.is_open())
    {
        int n;
        while (fileDoc >> n)
        {
            if (n % 2 == 0)
            {
                dem++;
            }
        }
    }

    return dem;
}

int sumFirstN(string nameFileDoc, int num)
{
    ifstream fileDoc;
    int sum = 0;

    fileDoc.open(nameFileDoc);

    if (fileDoc.is_open())
    {
        int n;
        for (int i = 0; i < num; i++)
        {
            fileDoc >> n;
            sum += n;
        }
    }

    return sum;
}

int sumLastN(string nameFileDoc, int num)
{
    ifstream fileDoc;
    int sum = 0;
    vector<int> arrInt;

    fileDoc.open(nameFileDoc);

    if (fileDoc.is_open())
    {
        int n;
        while (fileDoc >> n)
        {
            arrInt.push_back(n);
        }
        for (int i = arrInt.size() - 1; i > arrInt.size() - num - 1; i--)
        {
            sum += arrInt[i];
        }
    }

    return sum;
}

void writeFile(string tenFileGhi, int num, int demChan, int tongNDau, int tongNcuoi)
{
    ofstream fileGhi;

    fileGhi.open(tenFileGhi);

    if (fileGhi.is_open())
    {
        fileGhi << "So chan: " << demChan << endl;
        fileGhi << "Tong so nguyen duong dau: " << tongNDau << endl;
        fileGhi << "Tong so nguyen duong cuoi: " << tongNcuoi << endl;
    }
}