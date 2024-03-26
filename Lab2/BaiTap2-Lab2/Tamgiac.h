#include <iostream>
#include <cmath>
using namespace std;

class Tamgiac
{
private:
    double xa, ya, xb, yb, xc, yc;

public:
    void Nhap();
    void Xuat();
    void TinhTien(double kx, double ky);
    void PhongTo(double k);
    void ThuNho(double k);
    void Quay(double rad);
};

void Tamgiac::Nhap()
{
    cout << "Nhap toa do 3 diem cua tam giac: ";
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
}

void Tamgiac::Xuat()
{
    cout << "3 diem cua tam giac hien tai co toa do la: " << endl;
    cout << "A(" << xa << ", " << ya << ")" << endl;
    cout << "B(" << xb << ", " << yb << ")" << endl;
    cout << "C(" << xc << ", " << yc << ")" << endl;
}

void Tamgiac::TinhTien(double kx, double ky)
{
    xa += kx;
    ya += ky;
    xb += kx;
    yb += ky;
    xc += kx;
    yc += ky;
    cout << "Sau khi tinh tien ";
    Xuat();
}

void Tamgiac::PhongTo(double k)
{
    xa *= k;
    ya *= k;
    xb *= k;
    yb *= k;
    xc *= k;
    yc *= k;
    cout << "Sau khi phong to ";
    Xuat();
}

void Tamgiac::ThuNho(double k)
{
    xa /= k;
    ya /= k;
    xb /= k;
    yb /= k;
    xc /= k;
    yc /= k;
    cout << "Sau khi thu nho ";
    Xuat();
}

void Tamgiac::Quay(double rad)
{
    int n;
    cout << "Chon phep quay" << endl;
    cout << "1.Phep quay tai tam O" << endl;
    cout << "2.Phep quay tai 1 diem bat ki" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        xa = xa * cos(rad) - ya * sin(rad);
        ya = xa * sin(rad) + ya * cos(rad);
        xb = xb * cos(rad) - yb * sin(rad);
        yb = xb * sin(rad) + yb * cos(rad);
        xc = xc * cos(rad) - yc * sin(rad);
        yc = xc * sin(rad) + yc * cos(rad);
        break;
    case 2:
        double x, y;
        cout << "Nhap toa do diem quay: ";
        cin >> x >> y;
        xa = (xa - x) * cos(rad) - (ya - y) * sin(rad) + x;
        ya = (xa - x) * sin(rad) + (ya - y) * cos(rad) + y;
        xb = (xb - x) * cos(rad) - (yb - y) * sin(rad) + x;
        yb = (xb - x) * sin(rad) + (yb - y) * cos(rad) + y;
        xc = (xc - x) * cos(rad) - (yc - y) * sin(rad) + x;
        yc = (xc - x) * sin(rad) + (yc - y) * cos(rad) + y;
        break;
    }
    cout << "Sau khi quay ";
    Xuat();
}