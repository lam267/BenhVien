#pragma once
#include "BenhNhan.h"
#include "Ngay.h"
class Benh_Nhan_Ngoai_Tru: public BenhNhan
{
private:
	BenhNhan Mahs;
	CNgay NgayKham;
	int sobaohiem;
	string Mathuoc;
public:
	void Nhap();
	void Hienthi(ostream & os);


};
