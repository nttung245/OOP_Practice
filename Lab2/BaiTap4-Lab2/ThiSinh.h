#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ThiSinh
{
private:
    string Ten, MSSV;
    int iNgay, iThang, iNam;
    float fToan, fVan, fAnh;

public:
    void Nhap();
    void Xuat() const;
    float Tong() const;
};
void ThiSinh::Nhap()
{
    cout << "Nhap ten thi sinh: \n";
    getline(cin, Ten);
    cout << "Nhap MSSV: \n";
    getline(cin, MSSV);
    cout << "Nhap ngay thang nam sinh: \n";
    cin >> iNgay >> iThang >> iNam;
    cin.ignore();
    cout << "Nhap diem toan, van, anh: ";
    cin >> fToan >> fVan >> fAnh;
    cin.ignore();
};

void ThiSinh::Xuat() const
{
    cout << "Ten: " << Ten << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
    cout << "Diem toan: " << fToan << endl;
    cout << "Diem van: " << fVan << endl;
    cout << "Diem anh: " << fAnh << endl;
};

float ThiSinh::Tong() const
{
    return fToan + fVan + fAnh;
};