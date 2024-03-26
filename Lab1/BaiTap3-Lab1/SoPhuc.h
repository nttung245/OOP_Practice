#include <iostream>
#include <iomanip>

using namespace std;

class SoPhuc
{
private:
    float iThuc, iAo;

public:
    void Nhap()
    {
        cin >> iThuc >> iAo;
    }
    void Xuat()
    {
        cout << "So phuc vua nhap la: " << iThuc << " + " << iAo << 'i' << endl;
    }
    void Tong(SoPhuc b)
    {
        SoPhuc kq;
        kq.iThuc = iThuc + b.iThuc;
        kq.iAo = iAo + b.iAo;
        cout << "Tong cua 2 so phuc la: " << kq.iThuc << " + " << kq.iAo << 'i' << endl;
    }
    void Hieu(SoPhuc b)
    {
        SoPhuc kq;
        kq.iThuc = iThuc - b.iThuc;
        kq.iAo = iAo - b.iAo;
        cout << "Hieu cua 2 so phuc la: " << kq.iThuc << " + " << kq.iAo << 'i' << endl;
    }
    void Tich(SoPhuc b)
    {
        SoPhuc kq;
        kq.iThuc = iThuc * b.iThuc - iAo * b.iAo;
        kq.iAo = iThuc * b.iAo + iAo * b.iThuc;
        cout << "Tich cua 2 so phuc la: " << kq.iThuc << " + " << kq.iAo << 'i' << endl;
    }
    void Thuong(SoPhuc b)
    {
        SoPhuc kq;
        kq.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / (b.iThuc * b.iThuc + b.iAo * b.iAo);
        kq.iAo = (iAo * b.iThuc - iThuc * b.iAo) / (b.iThuc * b.iThuc + b.iAo * b.iAo);
        cout << "Thuong cua 2 so phuc la: " << fixed << setprecision(2) << kq.iThuc << " + " << kq.iAo << 'i' << endl;
    }
};