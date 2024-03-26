#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

class HinhChuNhat
{
private:
    int iDai, iRong;
    int x, y;

public:
    HinhChuNhat();
    HinhChuNhat(int dai, int rong);
    HinhChuNhat(int x, int y, int dai, int rong);
    friend ostream &operator<<(ostream &out, HinhChuNhat hcn);
    friend istream &operator>>(istream &in, HinhChuNhat &hcn);
    friend bool operator<(HinhChuNhat a, HinhChuNhat b);
    friend bool operator<=(HinhChuNhat a, HinhChuNhat b);
    friend bool operator>(HinhChuNhat a, HinhChuNhat b);
    friend bool operator>=(HinhChuNhat a, HinhChuNhat b);
    HinhChuNhat minContainingRectangle(const HinhChuNhat &A, const HinhChuNhat &B)
    {
        int minX = min(A.x - A.iDai / 2, B.x - B.iDai / 2);
        int minY = min(A.y - A.iRong / 2, B.y - B.iRong / 2);
        int maxX = max(A.x + A.iDai / 2, B.x + B.iDai / 2);
        int maxY = max(A.y + A.iRong / 2, B.y + B.iRong / 2);

        int dai = maxX - minX;
        int rong = maxY - minY;
        int x = minX + dai / 2;
        int y = minY + rong / 2;

        return HinhChuNhat(x, y, dai, rong);
    }
    /*
    HCN operator+(HCN b)
    {
        float _x1 TrenTrai.getX() + Dai;
        float _y1 = TrenTrai.getY() - Rong;

        float _x2 = b.TrenTrai.getX() + b.Dai;
        float _y2 = b.TrenTrai.getY() = b.Rong;

        float x = min(TrenTrai.getX(), b.TrenTrai.getX());
        float y = max(TrenTrai.getY(), b.TrenTrai.getY());

        float _x = max(_x1, _x2);
        float _y = max(_y1, _y2);

        float d = _x - x;
        float r = y -_y;

        return HCN(x, y, d, r);
    }
    */
    int getDai() const;
    int getRong() const;
    int getX() const;
    int getY() const;

    string getInfo() const;
};
int HinhChuNhat::getDai() const
{
    return iDai;
}
int HinhChuNhat::getRong() const
{
    return iRong;
}
int HinhChuNhat::getX() const
{
    return x;
}
int HinhChuNhat::getY() const
{
    return y;
}

string HinhChuNhat::getInfo() const
{
    return "HinhChuNhat(" + to_string(x) + ", " + to_string(y) + ", " + to_string(iDai) + ", " + to_string(iRong) + ")";
}

HinhChuNhat::HinhChuNhat()
{
    x = 0;
    y = 0;
    iDai = 1;
    iRong = 1;
}

HinhChuNhat::HinhChuNhat(int dai, int rong)
{
    this->iDai = dai;
    this->iRong = rong;
    this->x = 0;
    this->y = 0;
}
HinhChuNhat::HinhChuNhat(int x, int y, int dai, int rong)
{
    this->iDai = dai;
    this->iRong = rong;
    this->x = x;
    this->y = y;
}
ostream &operator<<(ostream &out, HinhChuNhat hcn)
{
    out << hcn.getInfo();
    return out;
}
istream &operator>>(istream &in, HinhChuNhat &hcn)
{
    cout << "Nhap x: ";
    in >> hcn.x;
    cout << "Nhap y: ";
    in >> hcn.y;
    cout << "Nhap dai: ";
    in >> hcn.iDai;
    cout << "Nhap rong: ";
    in >> hcn.iRong;
    return in;
}
bool operator<(HinhChuNhat a, HinhChuNhat b)
{
    return a.iDai * a.iRong < b.iDai * b.iRong;
}
bool operator<=(HinhChuNhat a, HinhChuNhat b)
{
    return a.iDai * a.iRong <= b.iDai * b.iRong;
}
bool operator>(HinhChuNhat a, HinhChuNhat b)
{
    return a.iDai * a.iRong > b.iDai * b.iRong;
}
bool operator>=(HinhChuNhat a, HinhChuNhat b)
{
    return a.iDai * a.iRong >= b.iDai * b.iRong;
}

int main()
{
    HinhChuNhat a;
    HinhChuNhat *b = new HinhChuNhat(7, 8);
    HinhChuNhat *c = new HinhChuNhat(5, 6, 2, 4);
    cout << *c << endl;
    delete b;
    delete c;
    int n;
    cin >> n;
    HinhChuNhat *d = new HinhChuNhat[n];
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    sort(d, d + n);
    return 0;
}