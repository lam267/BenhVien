#include<iostream>
#include <fstream>
#include "DateTime.cpp"
#include "BenhNhan.cpp"
using namespace std;
class BenhNhanNgoaiTru
{
    public:
    	int maSo;
        string maThuoc;
   		BenhNhan benhNhan;
		DateTime ngayKham;

        BenhNhanNgoaiTru(){}
        
        void nhap(int mSo, int lBenhNhan){
        	maSo = mSo;
        	benhNhan.nhap(mSo, lBenhNhan);	
			cin.ignore();
        	cout<<"Ma thuoc: ";fflush(stdin);getline(cin,maThuoc);	
			cout<<"Ngay kham: "; ngayKham.nhap();
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
   			myfile.open ("BenhNhanNgoaiTru.txt", std::ios_base::app);
			myfile << maSo << "," << maThuoc << "," << ngayKham.getNgay() << "\n";
    		myfile.close();
    		benhNhan.save();
        }
        void display(){
			cout << "Benh nhan: "; benhNhan.display();
			cout<<"Ma thuoc: "<< maThuoc << ", Ngay kham: " << ngayKham.getNgay() <<"\n";
        }
};
