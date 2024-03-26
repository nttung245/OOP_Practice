#include <iostream>

using namespace std;

class PhanSo
{
private:
    int iTu, iMau;

public:
    PhanSo();
    PhanSo(int Tu, int Mau);
    void RutGon(int &Tu, int &Mau);
    PhanSo operator+(PhanSo another);
    PhanSo operator-(PhanSo another);
    PhanSo operator*(PhanSo another);
    PhanSo operator/(PhanSo another);
    bool operator==(PhanSo another);
    bool operator!=(PhanSo another);
    bool operator>=(PhanSo another);
    bool operator<=(PhanSo another);
    bool operator>(PhanSo another);
    bool operator<(PhanSo another);
    friend istream &operator>>(istream &in, PhanSo &ps);
    friend ostream &operator<<(ostream &out, PhanSo &ps);
};

void PhanSo::RutGon(int &Tu, int &Mau)
{
    int x = Tu, y = Mau;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    Tu /= x;
    Mau /= x;
}

PhanSo::PhanSo()
{
    iTu = 1;
    iMau = 1;
}

istream &operator>>(istream &in, PhanSo &ps)
{
    cout << "Nhap vao Tu";
    in >> ps.iTu;
    cout << "Nhap vao Mau";
    in >> ps.iMau;
    return in;
}

ostream &operator<<(ostream &out, PhanSo &ps)
{
    out << ps.iTu << "/" << ps.iMau;
    return out;
}

PhanSo::PhanSo(int Tu, int Mau)
{
    iTu = Tu;
    iMau = Mau;
}

PhanSo PhanSo::operator+(PhanSo another)
{
    cout << "Tong cua 2 phan so la: ";
    PhanSo kq;
    kq.iTu = iTu * another.iMau + iMau * another.iTu;
    kq.iMau = iMau * another.iMau;
    if (kq.iTu == 0)
    {
        cout << 0 << endl;
    }
    else if (kq.iTu == kq.iMau)
    {
        cout << 1 << endl;
    }
    else if (kq.iTu % kq.iMau == 0)
    {
        cout << kq.iTu / kq.iMau << endl;
    }
    else
    {
        RutGon(kq.iTu, kq.iMau);
        cout << kq.iTu << '/' << kq.iMau << endl;
    }
    return kq;
}

PhanSo PhanSo::operator-(PhanSo another)
{
    cout << "Hieu cua 2 phan so la: ";
    PhanSo kq;
    kq.iTu = iTu * another.iMau - iMau * another.iTu;
    kq.iMau = iMau * another.iMau;
    if (kq.iTu == 0)
    {
        cout << 0 << endl;
    }
    else if (kq.iTu == kq.iMau)
    {
        cout << 1 << endl;
    }
    else if (kq.iTu % kq.iMau == 0)
    {
        cout << kq.iTu / kq.iMau << endl;
    }
    else
    {
        RutGon(kq.iTu, kq.iMau);
        cout << kq.iTu << '/' << kq.iMau << endl;
    }
    return kq;
}

PhanSo PhanSo::operator*(PhanSo another)
{
    cout << "Tich cua 2 phan so la: ";
    PhanSo kq;
    kq.iTu = iTu * another.iTu;
    kq.iMau = iMau * another.iMau;
    if (kq.iTu == 0)
    {
        cout << 0 << endl;
    }
    else if (kq.iTu == kq.iMau)
    {
        cout << 1 << endl;
    }
    else if (kq.iTu % kq.iMau == 0)
    {
        cout << kq.iTu / kq.iMau << endl;
    }
    else
    {
        RutGon(kq.iTu, kq.iMau);
        cout << kq.iTu << '/' << kq.iMau << endl;
    }
    return kq;
}

PhanSo PhanSo::operator/(PhanSo another)
{
    cout << "Thuong cua 2 phan so la: ";
    PhanSo kq;
    kq.iTu = iTu * another.iMau;
    kq.iMau = iMau * another.iTu;
    if (kq.iTu == 0)
    {
        cout << 0 << endl;
    }
    else if (kq.iTu == kq.iMau)
    {
        cout << 1 << endl;
    }
    else if (kq.iTu % kq.iMau == 0)
    {
        cout << kq.iTu / kq.iMau << endl;
    }
    else
    {
        RutGon(kq.iTu, kq.iMau);
        cout << kq.iTu << '/' << kq.iMau << endl;
    }
    return kq;
}

bool PhanSo::operator==(PhanSo another)
{
    return iTu == another.iTu && iMau == another.iMau;
}

bool PhanSo::operator!=(PhanSo another)
{
    return !(*this == another);
}

bool PhanSo::operator>=(PhanSo another)
{
    PhanSo new_this;
    new_this.iTu = this->iTu * another.iMau;
    PhanSo new_another;
    new_another.iTu = another.iTu * this->iMau;
    return new_this.iTu >= new_another.iTu;
}

bool PhanSo::operator<=(PhanSo another)
{
    PhanSo new_this;
    new_this.iTu = this->iTu * another.iMau;
    PhanSo new_another;
    new_another.iTu = another.iTu * this->iMau;
    return new_this.iTu <= new_another.iTu;
}

bool PhanSo::operator>(PhanSo another)
{
    PhanSo new_this;
    new_this.iTu = this->iTu * another.iMau;
    PhanSo new_another;
    new_another.iTu = another.iTu * this->iMau;
    return new_this.iTu > new_another.iTu;
}

bool PhanSo::operator<(PhanSo another)
{
    PhanSo new_this;
    new_this.iTu = this->iTu * another.iMau;
    PhanSo new_another;
    new_another.iTu = another.iTu * this->iMau;
    return new_this.iTu < new_another.iTu;
}