#include <iostream>
#include <string>

using namespace std;

int countElement(double arr[], int row, double num, int index)
{
    int count = 0;
    for (int i = index; i < row; i++)
    {
        if (arr[i] != num)
            break;
        count++;
    }
    return count;
}

int main()
{
    double arr[10] = {6.5, 6.5, 8.3, 8.3, 8.3, 8.3, 1.5, 9, 9, 3.7};
    double temp = arr[2];
    int count = 0, index = 0;
    for (int i = 0; i < 10; i++)
    {
        temp = arr[index];
        count = countElement(arr, 10, temp, index);
        if (count > 1)
        {
            cout << arr[index] << " xuat hien tai: ";
            for (int j = i; j <= i + count; j++)
            {
                cout << j + 1 << " ";
            }
            cout << endl;
        }
        index = i + count;
        count = 0;
    }
}