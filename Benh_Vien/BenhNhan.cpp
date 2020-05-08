#include "Ngay.h"
#include "BenhNhan.h"
void BenhNhan::Nhap()
{
	cout << "Nhap Mahs:";cin >> Mahs;
	fflush(stdin);
	cout << "Nhap Ho Ten:";getline(cin, HoTen);
	cout << "Ngay sinh:"; CNgay::nhap();
	fflush(stdin);
	cout << "Nhap Ho Ten:";getline(cin,Gioitinh);
	fflush(stdin);
	cout << "Nhap Ho Ten:";getline(cin, Chandoan);
}
void BenhNhan::Hienthi(ostream & os)
{
	os << "Ma Ho so:" << Mahs << "Ho ten:" << HoTen << "Gioi tih" << Gioitinh << "Chan doan:" << Chandoan; CNgay::Hienthi(os);
}

