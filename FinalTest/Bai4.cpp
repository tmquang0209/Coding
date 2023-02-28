/*
Viết một hàm có đối số là một mảng int và kích thước của mảng.
Hàm sẽ tạo một mảng mới có kích thước gấp đôi kích thước của mảng đối số.
Hàm nên sao chép nội dung của mảng đối số sang phần đầu của mảng mới và khởi tạo các phần tử còn lại của mảng mới bằng 0.
Hàm sẽ trả về một con trỏ đến mảng mới. Viết hàm main tạo một mảng với 4 phần tử, sau đó gọi hàm này và khai báo một con trỏ để nhận kết quả trả về.
In mảng kết quả qua con trỏ trả về.
VD: a[4]={1,2,3,4} thì hàm trả về mảng là ={1,2,3,4,0,0,0,0}
*/

#include <iostream>

using namespace std;

int inputValue(int num);
int *createArray(int *&arr, int size);

int main()
{
    int *arr, *arr2;
    int size;
    cout << "Nhap kich thuoc mang: ";
    while (!(cin >> size) || size < 1)
    {
        cout << "Nhap lai: ";
    }

    arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        arr[i] = inputValue(arr[i]);
    }

    arr = createArray(arr, size);
    for (int i = 0; i < size * 2; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int inputValue(int num)
{
    cin >> num;
    return num;
}

int *createArray(int *&arr, int size)
{
    int *arr2 = new int[size * 2];
    for (int i = 0; i < size * 2; i++)
    {
        if (i < size)
            arr2[i] = arr[i];
        else
            arr2[i] = 0;
    }
    return arr2;
}