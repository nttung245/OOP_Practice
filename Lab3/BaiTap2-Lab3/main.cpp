#include "SoPhuc.h"

int main()
{
    SoPhuc a;
    cin >> a;
    SoPhuc *b = new SoPhuc(2, 3);
    SoPhuc *c = new SoPhuc(a / (*b));
    if (a == *b)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}