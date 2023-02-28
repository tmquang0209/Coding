/*
Tạo file songuyen.txt chứa các số nguyên và file ketqua.txt rỗng. Sau đó, viết các hàm sau:

bool openFile() có 2 tham số là một file đọc và một file ghi. Hàm sẽ nhập từ bàn phím tên file đọc, tên file ghi, rồi mở 2 file đó, sau đó trả về true nếu mở được và false nếu không.
double sumOdd() nhận tham số là một file đọc chứa các số nguyên. Hàm sẽ trả về tổng các số lẻ xuất hiện trong file.
int firstN() nhận tham số là một số nguyên n và một file đọc (chứa các số nguyên). Hàm sẽ trả về số thứ n tính từ đầu file đi về cuối.
int lastN() nhận tham số là một số nguyên n và một file đọc (chứa các số nguyên). Hàm sẽ trả về số thứ n tính từ cuối file đi về đầu.
Hàm main sẽ làm nhiệm vụ như sau, sử dụng các hàm đã viết theo yêu cầu ở trên, để:
Mở một file đọc và một file ghi theo yêu cầu người dùng (vd: mở file songuyen.txt để đọc và file ketqua.txt để ghi)
Tính tổng các số lẻ trong file đọc, ghi kết quả vào file ghi
Tạo một số nguyên n sau đó, tìm trong file đọc, đâu là số thứ n tính từ đầu file đi về cuối và số thứ n tính từ cuối file đi về đầu, ghi các kết quả vào file ghi.
Giả định sẵn mọi đầu vào đều hợp lệ và không cần xác thực. Không dùng mảng hay vector. Sinh viên có thể đặt lại tên hàm nếu cần.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

bool openFile(string fileNameRead, string fileNameWrite);
void writeFile(string fileNameWrite, int num, double sumOdd, int firstN, int lastN);
double sumOdd(string fileNameRead);
int firstN(int num, string fileNameRead);
int lastN(int num, string fileNameRead);

int main()
{
    string fileNameRead, fileNameWrite;
    cout << "Nhap ten file doc: ";
    cin >> fileNameRead;
    cout << "Nhap ten file ghi: ";
    cin >> fileNameWrite;

    if (openFile(fileNameRead, fileNameWrite))
    {
        int num;
        cout << "Nhap so nguyen n: ";
        cin >> num;
        double resultSumOdd = sumOdd(fileNameRead);
        int resultFirstN = firstN(num, fileNameRead);
        int resultLastN = lastN(num, fileNameRead);
        writeFile(fileNameWrite, num, resultSumOdd, resultFirstN, resultLastN);
    }
    else
    {
        cout << "Khong the mo file" << endl;
    }

    return 0;
}

bool openFile(string fileNameRead, string fileNameWrite)
{
    ifstream fileRead;
    ofstream fileWrite;

    fileRead.open(fileNameRead);
    fileWrite.open(fileNameWrite);

    if (fileRead.is_open() && fileWrite.is_open())
    {
        return true;
    }
    else
    {
        return false;
    }
}

double sumOdd(string fileNameRead)
{
    ifstream fileRead;
    double sum = 0;
    int num;

    fileRead.open(fileNameRead);

    while (fileRead >> num)
    {
        if (num % 2 != 0)
        {
            sum += num;
        }
    }

    return sum;
}

int firstN(int num, string fileNameRead)
{
    ifstream fileRead;
    int count = 0;
    int numRead;

    fileRead.open(fileNameRead);

    while (fileRead >> numRead)
    {
        count++;
        if (count == num)
        {
            return numRead;
        }
    }

    return -1;
}

int lastN(int num, string fileNameRead)
{
    ifstream fileRead;
    int count = 0;
    int numRead;

    fileRead.open(fileNameRead);

    while (fileRead >> numRead)
    {
        count++;
    }

    fileRead.clear();
    fileRead.seekg(0, ios::beg);

    for (int i = 0; i < count - num; i++)
    {
        fileRead >> numRead;
    }

    return numRead;
}

void writeFile(string fileNameWrite, int num, double sumOdd, int firstN, int lastN)
{
    ofstream fileWrite;

    fileWrite.open(fileNameWrite);

    fileWrite << "Tong cac so le trong file: " << sumOdd << endl;
    if (firstN != -1)
    {
        fileWrite << "So thu " << num << " tinh tu dau file den cuoi: " << firstN << endl;
    }
    else
    {
        fileWrite << "Khong tim thay so thu " << num << " tinh tu dau file den cuoi" << endl;
    }
    if (lastN != -1)
    {
        fileWrite << "So thu " << num << " tinh tu cuoi file den dau: " << lastN << endl;
    }
    else
    {
        fileWrite << "Khong tim thay so thu " << num << " tinh tu cuoi file den dau" << endl;
    }
    // fileWrite << "So thu " << num << " tinh tu dau file den cuoi: " << firstN << endl;
    // fileWrite << "So thu " << num << " tinh tu cuoi file den dau: " << lastN << endl;
}