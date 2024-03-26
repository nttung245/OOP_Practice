#include "NgayThangNam.h"

int main()
{
    NgayThangNam date1(2024, 4, 10);
    cout << date1 << endl;
    date1 = (date1++);
    cout << date1 << endl;
    date1 = (date1--);
    cout << date1 << endl;
    date1.TinhNgay();

    NgayThangNam date2(1960, 1, 1);
    cout << date2 << endl;
    date2 = date2 - 10000;
    cout << date2 << endl;
    int days = date1 - date2;
    std::cout << days << endl;

    return 0;
}