#include "GiaSuc.h"

int main()
{
    GiaSuc *a = new GiaSuc();
    a->Nhap();
    a->TiengKeu();
    GiaSucAfter *b = new GiaSucAfter(*a);
    b->Sinh();
    b->Xuat();
    return 0;
}