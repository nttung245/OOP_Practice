#include <iostream>
#include <algorithm>
using namespace std;

class NgayThangNam
{
private:
    int iNgay, iThang, iNam;

public:
    NgayThangNam();
    NgayThangNam(int Nam, int Thang, int Ngay = 1);
    void TinhNgay();
    NgayThangNam operator+(int ngay);
    NgayThangNam operator-(int ngay);
    int operator-(const NgayThangNam &a) const;
    NgayThangNam operator++(int);
    NgayThangNam operator--(int);
    bool operator==(NgayThangNam another);
    bool operator!=(NgayThangNam another);
    bool operator>=(NgayThangNam another);
    bool operator<=(NgayThangNam another);
    bool operator>(NgayThangNam another);
    bool operator<(NgayThangNam another);
    friend ostream &operator<<(ostream &out, NgayThangNam &ntn);
    friend istream &operator>>(istream &in, NgayThangNam &ntn);
    int toDays() const;
};
NgayThangNam NgayThangNam::operator--(int)
{

    iNgay--;
    if (iNgay < 1)
    {
        iThang--;
        if (iThang < 1)
        {
            iThang = 12;
            iNam--;
        }
        if (iThang == 2 && iNam % 4 == 0)
        {
            iNgay = 29;
        }
        else if (iThang == 2 && iNam % 4 != 0)
        {
            iNgay = 28;
        }
        else if (iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10 || iThang == 12)
        {
            iNgay = 31;
        }
        else
        {
            iNgay = 30;
        }
    }

    return *this;
}

NgayThangNam NgayThangNam::operator++(int)
{

    iNgay++;
    if ((iNgay > 30 && (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11)) ||
        (iNgay > 31 && (iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10 || iThang == 12)) ||
        (iNgay > 28 && iThang == 2 && iNam % 4 != 0) || (iNgay > 29 && iThang == 2 && iNam % 4 == 0))
    {
        iNgay = 1;
        iThang++;
        if (iThang > 12)
        {
            iThang = 1;
            iNam++;
        }
    }

    return *this;
}

int NgayThangNam::toDays() const
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (iNam % 4 == 0 && (iNam % 100 != 0 || iNam % 400 == 0))
    {
        daysInMonth[2] = 29;
    }

    int days = 0;
    for (int year = 1900; year < iNam; year++)
    {
        days += year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? 366 : 365;
    }
    for (int month = 1; month < iThang; month++)
    {
        days += daysInMonth[month];
    }
    days += iNgay;

    return days;
}
int NgayThangNam::operator-(const NgayThangNam &a) const
{
    return toDays() - a.toDays();
}
NgayThangNam NgayThangNam::operator-(int ngay)
{
    NgayThangNam temp = *this;
    temp.iNgay -= ngay;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (temp.iNam % 4 == 0)
    {
        daysInMonth[2] = 29;
    }
    while (temp.iNgay < 1)
    {
        temp.iNgay += daysInMonth[temp.iThang - 1];
        temp.iThang--;
        if (temp.iThang < 1)
        {
            temp.iThang = 12;
            temp.iNam--;
            if (temp.iNam % 4 == 0)
            {
                daysInMonth[2] = 29;
            }
            else
            {
                daysInMonth[2] = 28;
            }
        }
    }
    return temp;
}

NgayThangNam NgayThangNam::operator+(int ngay)
{
    NgayThangNam temp = *this;
    temp.iNgay += ngay;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (iNam % 4 == 0)
    {
        daysInMonth[2] = 29;
    }
    while (temp.iNgay > daysInMonth[temp.iThang])
    {
        temp.iNgay -= daysInMonth[temp.iThang];
        temp.iThang++;
        if (temp.iThang > 12)
        {
            temp.iThang = 1;
            temp.iNam++;
            if (temp.iNam % 4 == 0)
            {
                daysInMonth[2] = 29;
            }
            else
            {
                daysInMonth[2] = 28;
            }
        }
    }
    return temp;
}

bool NgayThangNam::operator==(NgayThangNam another)
{
    return iNgay == another.iNgay && iThang == another.iThang && iNam == another.iNam;
}

bool NgayThangNam::operator!=(NgayThangNam another)
{
    return !(*this == another);
}

bool NgayThangNam::operator<(NgayThangNam another)
{
    if (this->iNam < another.iNam)
        return true;
    else if (this->iNam == another.iNam)
    {
        if (this->iThang < another.iThang)
            return true;
        else if (this->iThang == another.iThang)
        {
            if (this->iNgay < another.iNgay)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

bool NgayThangNam::operator>(NgayThangNam another)
{
    if (this->iNam > another.iNam)
        return true;
    else if (this->iNam == another.iNam)
    {
        if (this->iThang > another.iThang)
            return true;
        else if (this->iThang == another.iThang)
        {
            if (this->iNgay > another.iNgay)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

bool NgayThangNam::operator<=(NgayThangNam another)
{
    if (this->iNam < another.iNam)
        return true;
    else if (this->iNam == another.iNam)
    {
        if (this->iThang < another.iThang)
            return true;
        else if (this->iThang == another.iThang)
        {
            if (this->iNgay <= another.iNgay)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

bool NgayThangNam::operator>=(NgayThangNam another)
{
    if (this->iNam > another.iNam)
        return true;
    else if (this->iNam == another.iNam)
    {
        if (this->iThang > another.iThang)
            return true;
        else if (this->iThang == another.iThang)
        {
            if (this->iNgay >= another.iNgay)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}
istream &operator>>(istream &in, NgayThangNam &ntn)
{
    cout << "Nhap ngay: ";
    in >> ntn.iNgay;
    cout << "Nhap thang: ";
    in >> ntn.iThang;
    cout << "Nhap nam: ";
    in >> ntn.iNam;
    return in;
}
ostream &operator<<(ostream &out, NgayThangNam &ntn)
{
    out << ntn.iNgay << "/" << ntn.iThang << "/" << ntn.iNam;
    return out;
}
NgayThangNam::NgayThangNam()
{
    iNgay = 1;
    iThang = 1;
    iNam = 1970;
}
NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay)
{
    iNam = Nam;
    iThang = Thang;
    iNgay = Ngay;
}

void NgayThangNam::TinhNgay()
{
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust for leap year
    if (iNam % 4 == 0 && (iNam % 100 != 0 || iNam % 400 == 0))
    {
        daysInMonth[1] = 29;
    }

    int dayOfYear = iNgay;

    for (int i = 0; i < iThang - 1; ++i)
    {
        dayOfYear += daysInMonth[i];
    }

    cout << "Ngay thu: " << dayOfYear << " trong nam" << endl;
}
