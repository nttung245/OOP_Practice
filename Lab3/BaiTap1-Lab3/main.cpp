#include "PhanSo.h"

int main()
{
    PhanSo *a = new PhanSo(3, 4);
    PhanSo *b = new PhanSo(1, 2);
    PhanSo *c = new PhanSo(*a + *b);
    PhanSo *d = new PhanSo(*a - *b);
    PhanSo *e = new PhanSo(*a * *b);
    PhanSo *f = new PhanSo(*a / *b);
    if (*a >= *b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    delete f;
    return 0;
}