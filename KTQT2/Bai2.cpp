#include <iostream>

using namespace std;

const int NUMBER = 4;

void NhapDiem(float &);
float TrungBinh(float[]);

int main()
{
    float scores[NUMBER];

    for (int i = 0; i < NUMBER; i++)
    {
        NhapDiem(scores[i]);
    }

    cout << "Trung binh: " << TrungBinh(scores) << endl;
}

void NhapDiem(float &num)
{
    do
    {
        cout << "Nhap diem: ";
        cin >> num;
        if (num < 0 || num > 10)
            cout << "Diem khong hop le, nhap lai: ";
    } while (num < 0 || num > 10);
}

float TrungBinh(float scores[NUMBER])
{
    float sum = 0, min = scores[0];
    for (int i = 0; i < NUMBER; i++)
    {
        if (scores[i] < min)
            min = scores[i];
        sum += scores[i];
    }
    return (sum - min) / (NUMBER - 1);
}