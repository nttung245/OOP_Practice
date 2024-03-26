#include <iostream>
#include <cstdlib>
using namespace std;

class PhanSo
{
private:
    int iTu, iMau;

public:
    void Nhap()
    {
        cin >> iTu >> iMau;
    }
    void Xuat()
    {
        cout << "Phan so da nhap la " << iTu << '/' << iMau << '\n';
    }
    void RutGon(int &a, int &b)
    {
        int x = a, y = b;
        while (y != 0)
        {
            int temp = y;
            y = x % y;
            x = temp;
        }
        a /= x;
        b /= x;
    }
    void Tong(PhanSo b)
    {
        cout << "Tong cua 2 phan so la: ";
        PhanSo kq;
        kq.iTu = iTu * b.iMau + iMau * b.iTu;
        kq.iMau = iMau * b.iMau;
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
    }
    void Hieu(PhanSo b)
    {
        cout << "Hieu cua 2 phan so la: ";
        PhanSo kq;
        kq.iTu = abs(iTu * b.iMau - iMau * b.iTu);
        kq.iMau = iMau * b.iMau;
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
    }
    void Tich(PhanSo b)
    {
        cout << "Tich cua 2 phan so la: ";
        PhanSo kq;
        kq.iTu = iTu * b.iTu;
        kq.iMau = iMau * b.iMau;
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
    }
    void Thuong(PhanSo b)
    {
        cout << "Thuong cua 2 phan so la: ";
        PhanSo kq;
        kq.iTu = iTu * b.iMau;
        kq.iMau = iMau * b.iTu;
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
    }
    void Sosanh(PhanSo b)
    {
        float x = (float)iTu / iMau;
        float y = (float)b.iTu / b.iMau;
        if (x > y)
        {
            cout << "Phan so thu nhat lon hon phan so thu hai" << endl;
        }
        else if (x < y)
        {
            cout << "Phan so thu nhat nho hon phan so thu hai" << endl;
        }
        else
        {
            cout << "2 phan so bang nhau" << endl;
        }
    }
};