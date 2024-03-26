#include "DaGiac.h"
int main()
{
    DaGiac *dg = new DaGiac;
    dg->Nhap();
    dg->Xuat();
    dg->TinhTien(2, 3);
    dg->PhongTo(2);
    dg->ThuNho(2);
    dg->Quay(3.14);
    return 0;
}