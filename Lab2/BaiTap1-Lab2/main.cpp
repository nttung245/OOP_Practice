#include "Diem.h"

int main()
{
    Diem *A = new Diem(1, 2);
    Diem *B = new Diem(*A);
    B->SetTungDo();
    B->SetHoanhDo();
    B->TinhTien();
    delete A;
    delete B;
    return 0;
}