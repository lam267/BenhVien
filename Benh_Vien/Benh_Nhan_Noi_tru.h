#pragma once
#include "BenhNhan.h"
#include "Ngay.h"

class Benh_Nhan_Noi_tru : public BenhNhan
{
private:
	BenhNhan Mahs;
	CNgay NgayNhapVien;
	CNgay NgayXuatVien;
	string Khoa;
	int SoGiuong;
public:
	 
	 void Nhap();
	 void Hienthi(ostream & os);


};

