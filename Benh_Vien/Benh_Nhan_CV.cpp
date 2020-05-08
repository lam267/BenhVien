#include "Benh_Nhan_CV.h"

void Benh_Nhan_CV::Nhap()
{
	BenhNhan::Nhap();
	cout << "Ma benh nhan:"; BenhNhan::Mahs;
	cout << "Ngay chuyen:";CNgay::Nhap();
	fflush(stdin);
	cout << "Noi Chuyen:";getline(cin, Noichuyen);
}

void Benh_Nhan_CV::Hienthi(ostream & os)
{
	BenhNhan::Hienthi(os);cout << "Ma benh nhan:" << BenhNhan::Mahs << "Ngay chuyen:";CNgay::Hienthi(os); cout << "Noi chuyen:" << Noichuyen ;
}
