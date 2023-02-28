#include <iostream>

using namespace std;

int inputValue(int);
int *kTimes(int *, int, int);

int main()
{
    int n, k;
    cout << "Nhap so phan tu: ";
    n = inputValue(n);
    cout << "Nhap so lan lap: ";
    k = inputValue(k);

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    int *arr2 = kTimes(arr, n, k);

    for (int i = 0; i < n * k; i++)
    {
        cout << *(arr2 + i) << " ";
    }

    delete[] arr;
    delete[] arr2;

    return 0;
}

int inputValue(int num)
{
    while (!(cin >> num) || num < 0)
    {
        cout << "Nhap lai: ";
        cin.clear();
        cin.ignore();
    }
    return num;
}

int *kTimes(int *arr, int n, int k)
{
    int *arr2 = new int[n + k];
    int count = 0;
    for (int i = 0; i < n * k; i++)
    {
        arr2[i] = arr[count];
        count++;
        if (count == n)
        {
            count = 0;
        }
    }
    return arr2;
}