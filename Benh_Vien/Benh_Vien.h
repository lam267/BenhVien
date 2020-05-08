#pragma once
#include "BenhNhan.h"
#include<vector>
#include "Benh_Nhan_Noi_tru.h"
#include "Benh_Nhan_CV.h"
#include "Benh_Nhan_Ngoai_Tru.h"
#include<fstream>
class Benh_Vien
{
private:
	vector<BenhNhan*> ListBenhNhan;
public:
	void Nhap();
	void Hienthi(ostream & os);
	void Hienthi(ostream & os);
	void TimKiem();
	void Thongke();
};

