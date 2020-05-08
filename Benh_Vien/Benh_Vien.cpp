#include "Benh_Vien.h"

void Benh_Vien::Nhap()
{
	BenhNhan* benhnhan;
	int Luachon;
	do {
		cout << "----------------Menu-----------------";
		cout << "1.Nhap Benh nhan noi tru:\n\n";
		cout << "2.Nhap Benh nhan ngoai tru:\n";
		cout << "3. Nhap Benh nhan chuyen vien:\n";
		cout << "4. tro ve:\n";
		cout << "Nhap Lua chon:";cin >> Luachon;
		switch (Luachon)
		{
		case 1:
			benhnhan = new Benh_Nhan_Noi_tru(); benhnhan->Nhap();ListBenhNhan.push_back(benhnhan);
			break;
		case 2:
			benhnhan = new Benh_Nhan_Ngoai_Tru(); benhnhan->Nhap();ListBenhNhan.push_back(benhnhan);
			break;
		case 3:
			benhnhan = new Benh_Nhan_CV(); benhnhan->Nhap();ListBenhNhan.push_back(benhnhan);
			break;
		case 4:
			break;
		default:
			break;
		}
	} while (Luachon != 4);
}

void Benh_Vien::Hienthi(ostream & os)
{
	for (int i = 0; i < ListBenhNhan.size(); i++)
	{
		ListBenhNhan[i]->Hienthi(os);
	}
}

void Benh_Vien::TimKiem()
{



}

void Benh_Vien::Thongke()
{
}
