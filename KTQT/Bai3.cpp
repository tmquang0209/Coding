#include <iostream>

using namespace std;

const int LIMIT = 12;

int XacThuc(int[], int);
void SapXep(int[]);
void output(int[]);

int main()
{
    int arr[LIMIT] = {565, 452, 789, 877, 845, 130, 808, 456, 555, 505, 782, 125};
    int target;
    cout << "Nhap so can tim: ";
    cin >> target;
    cout << endl;
    int result = XacThuc(arr, target);
    if (result != -1)
    {
        cout << "Khong hop le!";
    }
    else
    {
        cout << "Hop le! Xuat hien tai vi tri " << result << endl;
    }

    cout << endl;
    SapXep(arr);
    output(arr);
}

int XacThuc(int arr[], int target)
{
    for (int i = 0; i < LIMIT; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void SapXep(int arr[])
{
    int temp;
    for (int i = 0; i < LIMIT; i++)
    {
        for (int j = i + 1; j < LIMIT; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void output(int arr[])
{
    for (int i = 0; i < LIMIT; i++)
    {
        cout << arr[i] << " ";
    }
}