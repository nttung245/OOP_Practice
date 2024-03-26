#include <iostream>

using namespace std;

class ThoiGian
{
private:
    int iGio, iPhut, iGiay;

public:
    ThoiGian();
    ThoiGian(int Gio, int Phut, int Giay);
    int TinhGiay();
    ThoiGian TinhLaiGio();
    ThoiGian operator+(int Giay);
    ThoiGian operator-(int Giay);
    ThoiGian operator+(ThoiGian a);
    ThoiGian operator-(ThoiGian a);
    ThoiGian operator++(int);
    ThoiGian operator--(int);
    bool operator==(ThoiGian another);
    bool operator!=(ThoiGian another);
    bool operator>=(ThoiGian another);
    bool operator<=(ThoiGian another);
    bool operator>(ThoiGian another);
    bool operator<(ThoiGian another);
    friend istream &operator>>(istream &in, ThoiGian &b);
    friend ostream &operator<<(ostream &out, ThoiGian &b);
};

istream &operator>>(istream &in, ThoiGian &b)
{
    cout << "Nhap gio: ";
    in >> b.iGio;
    cout << "Nhap phut: ";
    in >> b.iPhut;
    cout << "Nhap giay: ";
    in >> b.iGiay;
    return in;
}

ostream &operator<<(ostream &out, ThoiGian &b)
{
    out << b.iGio << ":" << b.iPhut << ":" << b.iGiay;
    return out;
}

ThoiGian::ThoiGian()
{
    iGio = 0;
    iPhut = 0;
    iGiay = 0;
}

ThoiGian::ThoiGian(int Gio, int Phut, int Giay)
{
    iGio = Gio;
    iPhut = Phut;
    iGiay = Giay;
}

int ThoiGian::TinhGiay()
{
    return (iGio * 3600 + iPhut * 60 + iGiay);
}

ThoiGian ThoiGian::TinhLaiGio()
{
    int temp_Giay = this->TinhGiay();
    ThoiGian temp;
    temp.iGio = temp_Giay / 3600;
    temp_Giay %= 3600;
    temp.iPhut = temp_Giay / 60;
    temp.iGiay = temp_Giay % 60;
    return temp;
}

ThoiGian ThoiGian::operator++(int)
{
    if (iGiay == 59)
    {
        iGiay = 0;
        if (iPhut < 59)
        {
            iPhut++;
        }
        else if (iPhut == 59)
        {
            iPhut = 0;
            if (iGio < 23)
            {
                iGio++;
            }
            else if (iGio == 23)
            {
                iGio = 0;
            }
            else
            {
                cout << "There are some problems with your input";
                exit(0);
            }
        }
        else
        {
            cout << "There are some problems with your input";
            exit(0);
        }
    }
    else if (iGiay < 59)
    {
        iGiay++;
    }
    else
    {
        cout << "There are some problems with your input";
        exit(0);
    }
    return *this;
}

ThoiGian ThoiGian::operator--(int)
{
    if (iGiay == 0)
    {
        iGiay = 59;
        if (iPhut > 0 && iPhut <= 59)
        {
            iPhut--;
        }
        else if (iPhut == 0)
        {
            iPhut = 59;
            if (iGio > 0 && iGio <= 23)
            {
                iGio--;
            }
            else if (iGio == 0)
            {
                iGio = 23;
            }
            else
            {
                cout << "There are some problems with your input";
                exit(0);
            }
        }
        else
        {
            cout << "There are some problems with your input";
            exit(0);
        }
    }
    else if (iGiay > 0 && iGiay <= 59)
    {
        iGiay--;
    }
    else
    {
        cout << "There are some problems with your input";
        exit(0);
    }
    return *this;
}

ThoiGian ThoiGian::operator+(ThoiGian a)
{
    ThoiGian kq = *this;
    int temp_giay_a = a.iGio * 3600 + a.iPhut * 60 + a.iGiay;
    kq.iGiay += temp_giay_a;
    while (kq.iGiay > 59)
    {
        kq.iGiay -= 60;
        if (kq.iPhut < 59)
        {
            kq.iPhut++;
        }
        else if (kq.iPhut == 59)
        {
            kq.iPhut = 0;
            if (kq.iGio == 23)
            {
                kq.iGio = 0;
            }
            else if (kq.iGio < 23)
            {
                kq.iGio++;
            }
        }
    }
    return kq;
}

ThoiGian ThoiGian::operator-(ThoiGian a)
{
    ThoiGian kq = *this;
    int temp_giay_a = a.iGio * 3600 + a.iPhut * 60 + a.iGiay;
    kq.iGiay -= temp_giay_a;
    while (kq.iGiay < 0)
    {
        kq.iGiay += 60;
        if (kq.iPhut > 0 && kq.iPhut <= 59)
        {
            kq.iPhut--;
        }
        else if (kq.iPhut == 0)
        {
            kq.iPhut = 59;
            if (kq.iGio > 0 && kq.iGio <= 23)
            {
                kq.iGio--;
            }
            else if (kq.iGio == 0)
            {
                kq.iGio = 23;
            }
        }
    }
    return kq;
}

ThoiGian ThoiGian::operator+(int Giay)
{
    ThoiGian temp = *this;
    temp.iGiay += Giay;
    while (temp.iGiay > 59)
    {
        temp.iGiay -= 60;
        if (temp.iPhut < 59)
        {
            temp.iPhut++;
        }
        else if (temp.iPhut == 59)
        {
            temp.iPhut = 0;
            if (temp.iGio == 23)
            {
                temp.iGio = 0;
            }
            else if (temp.iGio < 23)
            {
                temp.iGio++;
            }
        }
    }
    return temp;
}

ThoiGian ThoiGian::operator-(int Giay)
{
    ThoiGian temp = *this;
    temp.iGiay -= Giay;
    while (temp.iGiay < 0)
    {
        temp.iGiay += 60;
        if (temp.iPhut > 0 && temp.iPhut <= 59)
        {
            temp.iPhut--;
        }
        else if (temp.iPhut == 0)
        {
            temp.iPhut = 59;
            if (temp.iGio > 0 && temp.iGio <= 23)
            {
                temp.iGio--;
            }
            else if (temp.iGio == 0)
            {
                temp.iGio = 23;
            }
        }
    }
    return temp;
}

bool ThoiGian::operator==(ThoiGian another)
{
    return iGio == another.iGio && iPhut == another.iPhut && iGiay == another.iGiay;
}

bool ThoiGian::operator!=(ThoiGian another)
{
    return !(*this == another);
}

bool ThoiGian::operator>=(ThoiGian another)
{
    return this->TinhGiay() >= another.TinhGiay();
}

bool ThoiGian::operator<=(ThoiGian another)
{
    return this->TinhGiay() <= another.TinhGiay();
}

bool ThoiGian::operator<(ThoiGian another)
{
    return this->TinhGiay() < another.TinhGiay();
}

bool ThoiGian::operator>(ThoiGian another)
{
    return this->TinhGiay() > another.TinhGiay();
}
