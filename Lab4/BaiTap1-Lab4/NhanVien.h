#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class NhanVien
{
protected:
    string MSNV;
    string Ten;
    float LuongCoBan;

public:
    void Nhap()
    {
        cin >> MSNV;
        cin.ignore();
        getline(cin, Ten);
        cin >> LuongCoBan;
    }

    void Xuat()
    {
        cout << "Ma so nhan vien: " << MSNV << endl;
        cout << "Ten: " << Ten << endl;
        cout << "Luong co ban: " << LuongCoBan << endl;
    }
};

class QuanLy : public NhanVien
{
private:
    float tylethuong;

public:
    void Nhap()
    {
        NhanVien::Nhap();
        cin >> tylethuong;
    }
    float tienthuong()
    {
        return tylethuong * LuongCoBan;
    }
    void Xuat()
    {
        NhanVien::Xuat();
        cout << "Tien thuong: ";
        cout << fixed << setprecision(3) << tienthuong() << endl;
    }
};

class KySu : public NhanVien
{
private:
    float SoGioLamThem;

public:
    void Nhap()
    {
        NhanVien::Nhap();
        cin >> SoGioLamThem;
    }
    float tienthuong()
    {
        return SoGioLamThem * 100000;
    }
    void Xuat()
    {
        NhanVien::Xuat();
        cout << "Tien thuong: ";
        cout << tienthuong() << endl;
    }
};