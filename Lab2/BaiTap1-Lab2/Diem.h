#include <iostream>
using namespace std;

class Diem
{
private:
    int iHoanh, iTung;

public:
    Diem();
    Diem(int Hoanh, int Tung);
    Diem(const Diem &x);
    void Xuat();
    int GetTungDo();
    int GetHoanhDo();
    void SetTungDo();
    void SetHoanhDo();
    void TinhTien();
};
Diem::Diem()
{
    iHoanh = 0;
    iTung = 0;
}
Diem::Diem(int Hoanh, int Tung)
{
    iHoanh = Hoanh;
    iTung = Tung;
}
Diem::Diem(const Diem &x)
{
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}
void Diem::Xuat()
{
    std::cout << "Tung do hien tai la: " << iTung << std::endl;
    std::cout << "Hoanh do hien tai la: " << iHoanh << std::endl;
}
int Diem::GetTungDo()
{
    return iTung;
}
int Diem::GetHoanhDo()
{
    return iHoanh;
}
void Diem::SetTungDo()
{
    std::cout << "Nhap tung do: ";
    std::cin >> iTung;
    Xuat();
}
void Diem::SetHoanhDo()
{
    std::cout << "Nhap hoanh do: ";
    std::cin >> iHoanh;
    Xuat();
}
void Diem::TinhTien()
{
    int x, y;
    std::cout << "Nhap x: ";
    std::cin >> x;
    std::cout << "Nhap y: ";
    std::cin >> y;
    iTung += x;
    iHoanh += y;
    Xuat();
}