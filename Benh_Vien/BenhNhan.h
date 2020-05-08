#pragma once
#include "Ngay.h"
#include <string>

// Lớp cha
class BenhNhan: public CNgay
{
protected:
	int Mahs;
	string HoTen;
	CNgay NgaySinh;
	string Gioitinh;
	string Chandoan;
public:
	virtual void Nhap();
	virtual void Hienthi(ostream & os);

};

