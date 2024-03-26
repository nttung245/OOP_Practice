#include "PhanSo.h"
int main()
{
    PhanSo *a = new PhanSo;
    PhanSo *b = new PhanSo;
    a->Nhap();
    a->Xuat();
    b->Nhap();
    b->Xuat();
    a->Tong(*b);
    a->Hieu(*b);
    a->Tich(*b);
    a->Thuong(*b);
    a->Sosanh(*b);
    delete a;
    delete b;
    return 0;
}