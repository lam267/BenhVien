#include<iostream>
#include <fstream>
#include "DateTime.cpp"
#include "BenhNhan.cpp"
using namespace std;
class BenhNhanChuyenVien
{
    public:
    	int maSo;
        string noiChuyen;
   		BenhNhan benhNhan;
		DateTime ngayChuyen;

        BenhNhanChuyenVien(){}
        
        void nhap(int mSo, int lBenhNhan){
        	maSo = mSo;
        	benhNhan.nhap(mSo, lBenhNhan);	
			cin.ignore();
        	cout<<"Noi chuyen: ";fflush(stdin);getline(cin,noiChuyen);	
			cout<<"Ngay chuyen vien: "; ngayChuyen.nhap();	
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
   			myfile.open ("BenhNhanChuyenVien.txt", std::ios_base::app);
			myfile << maSo << "," << noiChuyen << "," << ngayChuyen.getNgay() << "\n";
    		myfile.close();
    		benhNhan.save();
        }
        void display(){
			cout << "Benh nhan: "; benhNhan.display();
			cout<<"Noi chuyen: "<< noiChuyen << ", Ngay chuyen: " << ngayChuyen.getNgay() <<"\n";
        }
};
