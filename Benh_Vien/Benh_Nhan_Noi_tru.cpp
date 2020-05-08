
#include "Benh_Nhan_Noi_tru.h"


void Benh_Nhan_Noi_tru::Nhap()
	{
	BenhNhan::Nhap();
	cout << "Ma benh nhan:"; BenhNhan::Mahs;
	cout << "Ngay nhap :"; CNgay::Nhap();
	cout << "Ngay xuat :"; CNgay::Nhap();
	fflush(stdin);
	cout << "khoa :";getline(cin , Khoa);
	cout << "So giuong:";cin >> SoGiuong;
	}
void Benh_Nhan_Noi_tru::Hienthi(ostream & os)
{
	BenhNhan::Hienthi(os);cout << "Ngay xuat:";CNgay::Hienthi(os); cout << "Ngay nhap:";CNgay::Hienthi(os);cout << "Khoa:" << Khoa << "So Giương:" << SoGiuong;
}