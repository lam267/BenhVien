#pragma once
#include "BenhNhan.h"
#include "Ngay.h"
class Benh_Nhan_CV:public BenhNhan
{
private:
	BenhNhan Mahs;
	CNgay NgayChuyen;
	string Noichuyen;
public:
	void Nhap();
	void Hienthi(ostream & os);


};

