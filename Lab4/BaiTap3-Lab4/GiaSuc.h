#include <iostream>
#include <ctime>
using namespace std;

class GiaSuc
{
protected:
    int Bo, Cuu, De;

public:
    void Nhap()
    {
        cout << "Nhap so luong bo, cuu, de: ";
        cin >> Bo >> Cuu >> De;
    }
    void TiengKeu()
    {
        if (Bo > 0 && Cuu > 0 && De > 0)
        {
            cout << "Co ba loai tieng keu" << endl;
        }
        else if (Bo > 0 && Cuu > 0 && De == 0)
        {
            cout << "Co tieng keu cua Bo va Cuu" << endl;
        }
        else if (Bo > 0 && De > 0 && Cuu == 0)
        {
            cout << "Co tieng keu cua Bo va De" << endl;
        }
        else if (Bo == 0 && De > 0 && Cuu > 0)
        {
            cout << "Co tieng keu cua De va Cuu" << endl;
        }
        else
        {
            cout << "Khong co tieng keu" << endl;
        }
    }
};

class GiaSucAfter : public GiaSuc
{
private:
    int tongsoSua_Bo = 0;
    int tongsoSua_Cuu = 0;
    int tongsoSua_De = 0;

public:
    GiaSucAfter(const GiaSuc &giaSuc) : GiaSuc(giaSuc) {}
    void Sinh()
    {
        srand(time(NULL));
        int numBo = Bo, numCuu = Cuu, numDe = De;
        for (int i = 0; i < numBo; i++)
        {
            int n = 1;
            int num = rand() % 10 + 1;
            Bo += (num * n);
        }
        for (int i = 0; i < numCuu; i++)
        {
            int n = 1;
            int num = rand() % 10 + 1;
            Cuu += (num * n);
        }
        for (int i = 0; i < numDe; i++)
        {
            int n = 1;
            int num = rand() % 10 + 1;
            De += (num * n);
        }
        for (int i = 0; i < Bo; i++)
        {
            int n = 1;
            int num = rand() % 20;
            tongsoSua_Bo += (num * n);
        }
        for (int i = 0; i < Cuu; i++)
        {
            int n = 1;
            int num = rand() % 5;
            tongsoSua_Cuu += (num * n);
        }
        for (int i = 0; i < De; i++)
        {
            int n = 1;
            int num = rand() % 10;
            tongsoSua_De += (num * n);
        }
    }
    void Xuat()
    {
        cout << "Tong so Bo sau 1 dot sinh la: " << Bo << endl;
        cout << "Tong so Cuu sau 1 dot sinh la: " << Cuu << endl;
        cout << "Tong so De sau 1 dot sinh la: " << De << endl;
        cout << "Tong so sua cua Bo la: " << tongsoSua_Bo << endl;
        cout << "Tong so sua cua Cuu la: " << tongsoSua_Cuu << endl;
        cout << "Tong so sua cua De la: " << tongsoSua_De << endl;
    }

    ~GiaSucAfter()
    {
        cout << "Da huy" << endl;
    }
};
