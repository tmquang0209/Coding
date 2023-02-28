#include <iostream>

using namespace std;

void createArray(int *&arr, int n);
void sortArray(int *&arr, int n);
void calcAverage(int *&arr, int n);
void outputArray(int *&arr, int n);
int findMin(int *&arr, int n);

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int *arr;
    createArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap diem #" << i + 1 << ": ";
        cin >> arr[i];
    }

    sortArray(arr, n);
    outputArray(arr, n);
    calcAverage(arr, n);
}

void createArray(int *&arr, int n)
{
    arr = new int[n];
}

void sortArray(int *&arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void calcAverage(int *&arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Diem trung binh: " << (double)(sum - findMin(arr, n)) / (n - 1) << endl;
}

int findMin(int *&arr, int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void outputArray(int *&arr, int n)
{
    cout << "Danh sach diem da sap xep tang dan: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}