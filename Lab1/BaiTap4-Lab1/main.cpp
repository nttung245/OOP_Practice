#include "GioPhutGiay.h"
int main()
{
    GioPhutGiay *a = new GioPhutGiay;
    a->Nhap();
    a->TinhCongThemMotGiay();
    delete a;
    return 0;
}