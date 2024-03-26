#include "NhanVien.h"

int main()
{
    QuanLy *a = new QuanLy();
    a->Nhap();
    a->Xuat();

    KySu *b = new KySu();
    b->Nhap();
    b->Xuat();
    return 0;
}