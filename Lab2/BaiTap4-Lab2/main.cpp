#include "ThiSinh.h"
int main()
{
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;
    cin.ignore();

    vector<ThiSinh> students(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Thi sinh thu " << i + 1 << endl;
        students[i].Nhap();
        students[i].Xuat();
        cout << "Tong diem: " << students[i].Tong() << endl;
    }

    cout << "Thong tin thi sinh co tong diem lon hon 15: " << endl;

    for (const auto &student : students)
    {
        if (student.Tong() > 15)
        {
            student.Xuat();
        }
    }

    cout << "Thong tin thi sinh co diem cao nhat la: " << endl;

    float maxScore = 0;

    for (const auto &student : students)
    {
        if (student.Tong() > maxScore)
        {
            maxScore = student.Tong();
        }
    }

    for (const auto &student : students)
    {
        if (student.Tong() == maxScore)
        {
            student.Xuat();
        }
    }
    return 0;
}