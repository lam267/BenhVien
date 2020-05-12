#include <iostream>
#include <cstdio>
#include "BenhVien.h"
using namespace std;

int main() {    
    
    BenhVien bv;
    bv.read();
    // bv.nhap();
    // return 0;
    // bv.xuat();
    // bn.save();
    int Luachon;
	do {
		cout << "----------------Menu-----------------\n";
		cout << "1.Nhap benh nhan:\n";
		cout << "2.Tim kiem benh nhan:\n";
		cout << "3.Thong ke benh nhan:\n";
		cout << "4.Tro ve:\n";
		cout << "Nhap Lua chon:";cin >> Luachon;
		switch (Luachon)
		{
		case 1:
			bv.nhapBenhNhan();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}
	} while (Luachon != 4);

}