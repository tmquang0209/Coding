/*
Viết chương trình tính số tiền phải trả góp hàng tháng cho món hàng:
 + Bước 1: in ra menu các sản phẩm cho người dùng chọn như sau:
            1. Điện thoại iphone 11, giá 10 000 000đ, lãi 1.5% mỗi tháng, 6 tháng
            2. Điện thoại iphone 12, giá 14 000 000đ, lãi 1.3% mỗi tháng, 9 tháng
            3. Điện thoại iphone X, giá 9 000 000đ, lãi 1.2% mỗi tháng , 12 tháng
            Yêu cầu người dùng chọn con số ứng với sản phẩm muốn mua trả góp
 + Bước 2: thông báo cho người dùng số tiền lãi và gốc phải trả mỗi tháng tùy theo sản phẩm mà họ chọn.
 Trong đó tiền gốc phải trả mỗi tháng bằng giá bán chia số tháng, số tiền lãi mỗi tháng bằng giá bán nhân lãi suất
*/
#include <iostream>

using namespace std;

void displayMenu();

int main()
{
    int choice;
    displayMenu();
    cout << "Nhap lua chon: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "iphone 11" << endl;
        cout << "So tien lai phai tra: " << 10000000 * 0.015 << "vnd" << endl;
        cout << "So tien goc phai tra: " << 10000000 / 6 << "vnd" << endl;
        break;
    case 2:
        cout << "iphone 12" << endl;
        cout << "So tien lai phai tra: " << 14000000 * 0.013 << "vnd" << endl;
        cout << "So tien goc phai tra: " << 14000000 / 9 << "vnd" << endl;
        break;
    case 3:
        cout << "iphone X" << endl;
        cout << "So tien lai phai tra: " << 9000000 * 0.012 << "vnd" << endl;
        cout << "So tien goc phai tra: " << 9000000 / 12 << "vnd" << endl;
        break;
    default:
        cout << "Lua chon khong hop le";
    }
    return 0;
}

void displayMenu()
{
    cout << "1. Dien thoai iphone 11, gia 10 000 000, lai 1.5% moi thang, 6 thang" << endl;
    cout << "2. Dien thoai iphone 12, gia 14 000 000, lai 1.3% moi thang, 9 thang" << endl;
    cout << "3. Dien thoai iphone X, gia 9 000 000, lai 1.2% moi thang, 12 thang" << endl;
}