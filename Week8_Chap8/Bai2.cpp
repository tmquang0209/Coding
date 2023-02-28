/*
Viết chương trình cấp phát động một mảng lớn đủ để chứa một số điểm bài kiểm tra do
người dùng nhập. Một khi tất cả điểm số được nhập, có một hàm sắp xếp mảng theo
thứ tự tăng dần. Một hàm khác là tính điểm trung bình. Các chương trình sẽ hiển thị
danh sách điểm đã được sắp xếp và điểm trung bình, phía trên mỗi đầu điểm có tiêu đề
thích hợp. Sử dụng con trỏ thay vì mảng bất cứ khi nào có thể.
Xác thực đầu vào: Điểm số không chấp nhận số âm.
*/

#include <iostream>

using namespace std;

void createArray(int *arr, int n);
void sortArray(int *arr, int n);
void calcAverage(int *arr, int n);
void outputArray(int *arr, int n);

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
        cin >> *(arr + i);
    }

    sortArray(arr, n);
    outputArray(arr, n);
    calcAverage(arr, n);
}

void createArray(int *arr, int n)
{
    arr = new int[n];
}

void sortArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void calcAverage(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    cout << "Diem trung binh: " << (double)sum / n << endl;
}

void outputArray(int *arr, int n)
{
    cout << "Danh sach diem da sap xep tang dan: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}