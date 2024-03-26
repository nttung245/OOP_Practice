#include <iostream>
#include <cmath>
using namespace std;
class Diem
{
private:
    float iTung, iHoanh;

public:
    void Nhap();
    void Xuat();
    void TinhTien(float x, float y);
    void PhongTo(float k);
    void ThuNho(float k);
    void Quay1(float rad);
    void Quay2(float rad, float x, float y);
};

void Diem::Nhap()
{
    cout << "Nhap hoanh do va tung do: ";
    cin >> iHoanh >> iTung;
}

void Diem::Xuat()
{
    cout << "Hoanh do: " << iHoanh << endl;
    cout << "Tung do: " << iTung << endl;
}

void Diem::TinhTien(float x, float y)
{
    iHoanh = iHoanh + x;
    iTung = iTung + y;
}

void Diem::PhongTo(float k)
{
    iHoanh = iHoanh * k;
    iTung = iTung * k;
}

void Diem::ThuNho(float k)
{
    iHoanh = iHoanh / k;
    iTung = iTung / k;
}

void Diem::Quay1(float rad)
{
    iHoanh = iHoanh * cos(rad) - iTung * sin(rad);
    iTung = iHoanh * sin(rad) + iTung * cos(rad);
}

void Diem::Quay2(float rad, float x, float y)
{
    iHoanh = (iHoanh - x) * cos(rad) - (iTung - y) * sin(rad) + x;
    iTung = (iHoanh - x) * sin(rad) + (iTung - y) * cos(rad) + y;
}