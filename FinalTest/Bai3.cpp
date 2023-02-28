/*
a) Viết chương trình cho phép người dùng nhập vào một mảng chứa n số nguyên từ bàn phím. Trong đó:

Giá trị n cũng được nhập từ bàn phím.
Không chấp nhận nhập vào mảng các số nguyên nhỏ hơn 1 (nếu nhập sai, chương trình yêu cầu người dùng nhập lại)
b) Viết tiếp chương trình thực hiện các công việc sử dụng mảng số nguyên ở câu a) như sau:

Viết hàm kiểm tra một số có phải là số nguyên tố (số nguyên tố là số chỉ chia hết cho một và chính số đó, ngoại lệ là số 1 không tính là số nguyên tố)
Đếm xem trong có mảng có bao nhiêu số nguyên tố
Sắp xếp mảng theo chiều tăng dần (từ bé đến lớn).
*/
#include <iostream>

using namespace std;

int input(int num, int numCheck);
bool isPrime(int num);
int countPrime(int arr[], int num);
void sort(int arr[], int num);

int main()
{
    int size;
    cout << "Nhap kich thuoc mang: ";
    size = input(size, 0);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        arr[i] = input(arr[i], 1);
    }

    cout << "Mang co " << countPrime(arr, size) << " so nguyen to" << endl;

    cout << "Mang vua nhap: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Mang sau khi sap xep: ";
    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int input(int num, int numCheck)
{
    while (!(cin >> num) || num < numCheck)
    {
        cout << "Nhap lai: ";
    }
    return num;
}

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrime(int arr[], int num)
{
    int count = 0;
    for (int i = 0; i < num; i++)
    {
        if (isPrime(arr[i]))
        {
            count++;
        }
    }
    return count;
}

void sort(int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
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