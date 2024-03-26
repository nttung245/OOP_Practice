#include <iostream>
#include <iomanip>

using namespace std;

class SoPhuc
{
private:
    float dThuc, dAo;

public:
    SoPhuc();
    SoPhuc(int thuc, int ao);
    SoPhuc operator+(SoPhuc another);
    SoPhuc operator-(SoPhuc another);
    SoPhuc operator*(SoPhuc another);
    SoPhuc operator/(SoPhuc another);
    bool operator==(SoPhuc another);
    bool operator!=(SoPhuc another);
    friend istream &operator>>(istream &in, SoPhuc &another);
    friend ostream &operator<<(ostream &out, SoPhuc &another);
};

SoPhuc::SoPhuc()
{
    dThuc = 0;
    dAo = 0;
}

SoPhuc::SoPhuc(int thuc, int ao)
{
    dThuc = thuc;
    dAo = ao;
}

SoPhuc SoPhuc::operator+(SoPhuc another)
{
    SoPhuc kq;
    kq.dThuc = dThuc + another.dThuc;
    kq.dAo = dAo + another.dAo;
    cout << "Tong cua 2 so phuc la: " << kq.dThuc << " + " << kq.dAo << "i\n";
    return kq;
}

SoPhuc SoPhuc::operator-(SoPhuc another)
{
    SoPhuc kq;
    kq.dThuc = dThuc - another.dThuc;
    kq.dAo = dAo - another.dAo;
    cout << "Hieu cua 2 so phuc la: " << kq.dThuc << " + " << kq.dAo << "i\n";
    return kq;
}

SoPhuc SoPhuc::operator*(SoPhuc another)
{
    SoPhuc kq;
    kq.dThuc = dThuc * another.dThuc - dAo * another.dAo;
    kq.dAo = dThuc * another.dAo + another.dThuc * dAo;
    cout << "Tich cua 2 so phuc la: " << kq.dThuc << " + " << kq.dAo << 'i' << endl;
    return kq;
}

SoPhuc SoPhuc::operator/(SoPhuc another)
{
    SoPhuc kq;
    kq.dThuc = (dThuc * another.dThuc + dAo * another.dAo) / (another.dThuc * another.dThuc + another.dAo * another.dAo);
    kq.dAo = (dAo * another.dThuc - dThuc * another.dAo) / (another.dThuc * another.dThuc + another.dAo * another.dAo);
    cout << "Thuong cua 2 so phuc la: " << fixed << setprecision(2) << kq.dThuc << " + " << kq.dAo << 'i' << endl;
    return kq;
}

bool SoPhuc::operator==(SoPhuc another)
{
    return dThuc == another.dThuc && dAo == another.dAo;
}

bool SoPhuc::operator!=(SoPhuc another)
{
    return !(*this == another);
}

istream &operator>>(istream &in, SoPhuc &another)
{
    cout << "Nhap vao phan Thuc: ";
    in >> another.dThuc;
    cout << "Nhap vao phan Ao: ";
    in >> another.dAo;
    return in;
}

ostream &operator<<(ostream &out, SoPhuc &another)
{
    out << another.dThuc << " + " << another.dAo << "i\n";
    return out;
}