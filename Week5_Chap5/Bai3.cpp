#include <iostream>
using namespace std;

double inputValue(double);
void findHighest(double, double, double, double);

double inputValue(double num)
{
    do
    {
        cin >> num;
        if (num < 0)
        {
            cout << "Loi! Nhap gia tri > 0." << endl;
        }
    } while (num < 0);
    return num;
}

double getSales(string name)
{
    double sales;
    cout << "Nhap " << name << " : ";
    sales = inputValue(sales);
    return sales;
}

void findHighest(double Northeast, double Southeast, double Northwest, double Southwest)
{
    double highest;
    if (Northeast > Southeast &&
        Northeast > Northwest &&
        Northeast > Southwest)
    {
        highest = Northeast;
        cout << "Dong Bac";
    }
    else if (Southeast > Southwest &&
             Southeast > Northwest &&
             Southeast > Northwest)
    {
        highest = Southeast;
        cout << "Dong Nam"; 
    }
    else if (Northwest > Northeast &&
             Northwest > Southeast &&
             Northwest > Southwest)
    {
        highest = Northwest;
        cout << "Tay Bac";
    }
    else
    {
        highest = Southwest;
        cout << "Tay Nam";
    }
    cout << " la noi co doanh so lon nhat: " << highest;
}

int main()
{
    double Northeast, Southeast, Northwest, Southwest;
    Northeast = getSales("Dong Bac");
    Southeast = getSales("Dong Nam");
    Northwest = getSales("Tay Bac");
    Southwest = getSales("Tay Nam");
    findHighest(Northeast, Southeast, Northwest, Southwest);
    return 0;
}
