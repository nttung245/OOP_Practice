#include "Tamgiac.h"

int main()
{
    Tamgiac *a = new Tamgiac;
    a->Nhap();
    a->Xuat();
    a->TinhTien(2, 2);
    a->PhongTo(2);
    a->ThuNho(2);
    a->Quay(3.14);
    return 0;
}