/*
Viết chương trình thực hiện các công việc sau:
	Hiển thị 1 thực đơn với các chức năng sau:
1. Tính diện tích hình tròn
2. Tính diện tích hình chữ nhật
3. Tính diện tích hình tam giác vuông
4. Thoát
	Yêu cầu người dùng chọn các chức năng từ 1 đến 4. Tùy lựa chọn của người dùng để thực
hiện đúng chức năng. Biết :
	Diện tích hình tròn là r2
	Diện tích hình chữ nhật là dài x rộng.
	Diện tích tam giác vuông (biết độ dài 2 cạnh góc vuông a, b) là 0.5 x ab
*/

#include <iostream>

using namespace std;

const float PI = 3.14;

void displayMenu();
void doMenu();
void inputValue(float &);

int main()
{
    doMenu();
}

void displayMenu()
{

    cout << "=========MENU=============" << endl;
    cout << "1. Dien tich hinh tron." << endl;
    cout << "2. Dien tich hinh chu nhat." << endl;
    cout << "3. Dien tich hinh tam giac vuong." << endl;
    cout << "4. Thoat." << endl;
    cout << "==========================" << endl;
}

void doMenu()
{
    bool flag = true;
    do
    {
        displayMenu();
        int choice;
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            float radius;
            cout << "Nhap ban kinh: ";
            inputValue(radius);
            cout << "Dien tich hinh tron la: " << PI * radius * radius << endl;
            break;
        case 2:
            float width, height;
            cout << "Nhap chieu dai: ";
            inputValue(height);
            cout << "Nhap chieu rong: ";
            inputValue(width);
            cout << "Dien tich hinh chu nhat la: " << height * width << endl;
            break;
        case 3:
            float side1, side2;
            cout << "Nhap canh a: ";
            inputValue(side1);
            cout << "Nhap canh b: ";
            inputValue(side2);
            cout << "Dien tich hinh tam giac vuong la: " << 0.5 * side1 * side2 << endl;
            break;
        case 4:
            flag = false;
            cout << "Thoat chuong trinh." << endl;
            break;
        default:
            cout << "Lua chon khong hop le." << endl;
            break;
        }
    } while (flag);
}

void inputValue(float &value)
{
    cin >> value;
    while (value < 0)
    {
        cout << "Nhap lai: ";
        cin >> value;
    }
}