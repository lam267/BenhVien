#include "Ngay.h"

void CNgay::Nhap()
{
	cout << "Ngay:";cin >> Ngay;
	cout << "Thang:";cin >> Thang;
	cout << "Nam:";cin >> Nam;
}

void CNgay::Hienthi(ostream & os)
{
	cout << "Ngay:" << Ngay << "-" << "thang" << Thang << "-" << Nam;
}

