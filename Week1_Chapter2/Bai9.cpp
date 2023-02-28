/*
Một túi bánh có 30 chiếc bánh. Thông tin về calorie trên túi ghi rằng 10 khẩu phần
trong túi và một khẩu phần tương đương với 300 calories. Viết chương trình yêu cầu
người dùng nhập số lượng bánh mà họ đã ăn, sau đó in ra thông báo tổng số calories
đã tiêu thụ
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const int COOKIES_PER_BAG = 30,
              SERVINGS_PER_BAG = 10,
              CALORIES_PER_SERVING = 300;

    float cookies_eaten, //So banh an
        servings_eaten, //So khau phan
        calories_consumed, //So calo tiêu thụ
        cookies_per_serving = COOKIES_PER_BAG / SERVINGS_PER_BAG; //So banh trong 1 khau phan

    cout << "Nhap so luong banh da an: ";
    cin >> cookies_eaten;

    servings_eaten = cookies_eaten / cookies_per_serving;
    calories_consumed = servings_eaten * CALORIES_PER_SERVING;

    cout << setprecision(2) << fixed;

    cout << "So luong banh da an: " << cookies_eaten << endl;
    cout << "So phan an: " << servings_eaten << endl;
    cout << "Luong calories tieu thu: " << calories_consumed << endl;

    return 0;
}