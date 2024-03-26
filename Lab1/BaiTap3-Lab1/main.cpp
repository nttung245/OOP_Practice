#include "SoPhuc.h"

int main()
{
    SoPhuc *a = new SoPhuc;
    SoPhuc *b = new SoPhuc;
    a->Nhap();
    b->Nhap();
    a->Tong(*b);
    a->Hieu(*b);
    a->Tich(*b);
    a->Thuong(*b);
    return 0;
}