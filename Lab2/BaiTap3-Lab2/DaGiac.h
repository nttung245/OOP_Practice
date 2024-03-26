#include "Diem1.h"

using namespace std;

class DaGiac
{
private:
    int n;
    Diem *Dinh;

public:
    void Nhap();
    void Xuat();
    void TinhTien(float x, float y);
    void PhongTo(float k);
    void ThuNho(float k);
    void Quay(float rad);
};

void DaGiac::Nhap()
{
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    Dinh = new Diem[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap toa do dinh thu " << i + 1 << endl;
        Dinh[i].Nhap();
    }
}

void DaGiac::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Toa do dinh thu " << i + 1 << endl;
        Dinh[i].Xuat();
    }
}

void DaGiac::TinhTien(float x, float y)
{
    for (int i = 0; i < n; i++)
    {
        Dinh[i].TinhTien(x, y);
    }
    cout << "Da tinh tien da giac" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Toa do dinh thu " << i + 1 << endl;
        Dinh[i].Xuat();
    }
}

void DaGiac::PhongTo(float k)
{
    for (int i = 0; i < n; i++)
    {
        Dinh[i].PhongTo(k);
    }
    cout << "Da phong to da giac" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Toa do dinh thu " << i + 1 << endl;
        Dinh[i].Xuat();
    }
}

void DaGiac::ThuNho(float k)
{
    for (int i = 0; i < n; i++)
    {
        Dinh[i].ThuNho(k);
    }
    cout << "Da thu nho da giac" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Toa do dinh thu " << i + 1 << endl;
        Dinh[i].Xuat();
    }
}

void DaGiac::Quay(float rad)
{
    int k;
    cout << "Chon phep quay" << endl;
    cout << "1.Phep quay tai tam O" << endl;
    cout << "2.Phep quay tai 1 diem bat ki" << endl;
    cin >> k;
    switch (k)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            Dinh[i].Quay1(rad);
            continue;
        }
        break;
    case 2:
        float x, y;
        cout << "Nhap toa do diem quay: ";
        cin >> x >> y;
        for (int i = 0; i < n; i++)
        {
            Dinh[i].Quay2(rad, x, y);
        }
        break;
    }
    cout << "Da quay da giac" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Toa do dinh thu " << i + 1 << endl;
        Dinh[i].Xuat();
    }
}