#include<iostream>
#include <fstream>
#include "DateTime.cpp"
#include "BenhNhan.cpp"
using namespace std;
class BenhNhanNoiTru
{
    public:
    	int maSo;
        string tenKhoa;
   		string soGiuong; 
   		BenhNhan benhNhan;
		DateTime ngayNhapVien;
		DateTime ngayXuatVien;

        BenhNhanNoiTru(){}
        
        void nhap(int mSo, int lBenhNhan){
        	maSo = mSo;
        	benhNhan.nhap(mSo, lBenhNhan);	
			cin.ignore();
        	cout<<"Ten khoa: ";fflush(stdin);getline(cin,tenKhoa);	
			cout<<"So giuong: ";fflush(stdin);getline(cin,soGiuong);	
			cout<<"Ngay nhap vien: "; ngayNhapVien.nhap();	
			cout<<"Ngay xuat vien: "; ngayXuatVien.nhap();	
			int luuBenhNhan;
			cout << "----------------Luu thong tin benh nhan-----------------\n";
			cout << "1.Luu:\n";
			cout << "2.Khong luu:\n";
			cout << "Nhap Lua chon:";cin >> luuBenhNhan;
			if(luuBenhNhan == 1){
				save();
			}
        }
        void save(){
        	ofstream myfile;
   			myfile.open ("BenhNhanNoiTru.txt", std::ios_base::app);
			myfile << maSo << "," << tenKhoa << "," << soGiuong << "," << ngayNhapVien.getNgay() << "," << ngayXuatVien.getNgay() << "," << soGiuong << "\n";
    		myfile.close();
    		benhNhan.save();
        }
        void display(){
			cout << "Benh nhan: "; benhNhan.display();
			cout<<"Ten khoa: "<<tenKhoa << ", So giuong: " << soGiuong <<
			", Ngay nhap vien: " << ngayNhapVien.getNgay() << ", Ngay xuat vien: " << ngayXuatVien.getNgay() <<"\n";
        }
};
