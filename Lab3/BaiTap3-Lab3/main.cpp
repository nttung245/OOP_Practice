#include "ThoiGian.h"

int main()
{
    ThoiGian *a = new ThoiGian(22, 59, 59);
    cout << *a << endl;
    cout << a->TinhGiay() << endl;

    ThoiGian b = *a + 1000;
    cout << b << endl;

    ThoiGian *c = new ThoiGian(21, 59, 59);
    cout << *c << endl;

    ThoiGian d = (*a)--;
    cout << d << endl;

    ThoiGian e = *c + d;
    cout << e << endl;

    /*if (b <= *c)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }*/
    return 0;
}