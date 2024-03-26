#include <iostream>

using namespace std;

class GioPhutGiay
{
private:
    int iGio, iPhut, iGiay;

public:
    void Nhap()
    {
        cin >> iGio >> iPhut >> iGiay;
    }
    void Xuat()
    {
        cout << "Thoi gian sau khi cong them 1 giay la: " << iGio << " gio " << iPhut << " phut " << iGiay << " giay\n";
    }
    void TinhCongThemMotGiay()
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
                    cout << "Thoi gian ban nhap khong hop le, vui long nhap lai";
                    exit(0);
                }
            }
            else
            {
                cout << "Thoi gian ban nhap khong hop le, vui long nhap lai";
                exit(0);
            }
        }
        else if (iGiay < 59)
        {
            iGiay++;
        }
        else
        {
            cout << "Thoi gian ban nhap khong hop le, vui long nhap lai";
            exit(0);
        }
        Xuat();
        if (iGio == 0 && iPhut == 0 && iGiay == 0)
        {
            cout << "Good Morning!";
        }
    }
};