#include <iostream>
using namespace std;
class NgayThangNam
{
private:
    int iNgay, iThang, iNam;

public:
    void Nhap()
    {
        cout << "Nhap vao ngay thang nam: ";
        cin >> iNgay >> iThang >> iNam;
    }
    void Xuat()
    {
        cout << "Ngay thang nam vua nhap la: " << iNgay << "/" << iThang << "/" << iNam << endl;
    }
    void NgayThangNamTiepTheo()
    {
        if (iThang == 2)
        {
            if (iNam % 4 == 0)
            {
                if (iNgay == 29)
                {
                    iNgay = 1;
                    iThang++;
                }
                else if (iNgay < 29)
                {
                    iNgay++;
                }
            }
            else
            {
                if (iNgay == 28)
                {
                    iNgay = 1;
                    iThang++;
                }
                else if (iNgay < 28)
                {
                    iNgay++;
                }
            }
        }
        else
        {
            if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11)
            {
                if (iNgay == 30)
                {
                    iNgay = 1;
                    iThang++;
                }
                else if (iNgay < 30)
                {
                    iNgay++;
                }
            }
            else
            {
                if (iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10)
                {
                    if (iNgay == 31)
                    {
                        iNgay = 1;
                        iThang++;
                    }
                    else if (iNgay < 31)
                    {
                        iNgay++;
                    }
                }
                else if (iThang == 12)
                {
                    if (iNgay < 31)
                    {
                        iNgay++;
                    }
                    else
                    {
                        iNgay = 1;
                        iThang = 1;
                        iNam++;
                    }
                }
            }
        }
        cout << "Ngay thang nam tiep theo la: " << iNgay << '/' << iThang << '/' << iNam;
    };
};