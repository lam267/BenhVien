#include "Benh_Nhan_Ngoai_Tru.h"

void Benh_Nhan_Ngoai_Tru::Nhap()
{
	BenhNhan::Nhap();
	cout << "Ma benh nhan:"; BenhNhan::Mahs;
	cout << "Ngay kham:";CNgay::Nhap();
	cout << "So bao hiem:"; cin >> sobaohiem;
	fflush(stdin);
	cout << "Ma thuoc:";getline(cin, Mathuoc);

}

void Benh_Nhan_Ngoai_Tru::Hienthi(ostream & os)
{
	BenhNhan::Hienthi(os);cout << "Ma benh nhan:" <<BenhNhan::Mahs<< "Ngay kham:";CNgay::Hienthi(os); cout << "So bao hiem:" << sobaohiem << "Ma thuoc:" << Mathuoc;
}
