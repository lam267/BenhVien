#pragma once
#include<iostream>
#include <fstream>
#include "DateTime.cpp"
using namespace std;
class BenhNhan
{
    public:
        int maSo;
		string hoTen;
		string gioiTinh;
		string chanDoan;
	    int loaiBenhNhan;
	    DateTime ngaySinh;

        BenhNhan(){}
        
        void nhap(int mSo, int lBenhNhan){
        	maSo = mSo;
        	loaiBenhNhan = lBenhNhan;
			cin.ignore();
        	cout<<"Ten benh nhan: ";fflush(stdin);getline(cin,hoTen);			
			cout<<"Gioi tinh: ";fflush(stdin);getline(cin,gioiTinh);			
			cout<<"Chan doan: ";fflush(stdin);getline(cin,chanDoan);			
			cout<<"Ngay sinh: "; ngaySinh.nhap();	

        }
        void save(){
        	ofstream myfile;
   			myfile.open ("BenhNhan.txt", std::ios_base::app);
			myfile << maSo << "," << hoTen << "," << gioiTinh << "," << chanDoan << "," << ngaySinh.getNgay() << ","<< loaiBenhNhan << "\n"; 
    		myfile.close();
        }
        
        void display(){
			string lBenhNhan = "";
			if(loaiBenhNhan == 1){
				lBenhNhan = "Benh nhan noi tru";
			}
			else if(loaiBenhNhan == 2){
				lBenhNhan = "Benh nhan ngoai tru";
			}
			else if(loaiBenhNhan == 3){
				lBenhNhan = "Benh nhan chuyen vien";
			}
        	cout<<"Ma so: "<<maSo << ", Ho Ten: " << hoTen <<
			 ", Gioi tinh: " << gioiTinh << ", Chan doan: " << chanDoan << ", Ngay sinh: " << ngaySinh.getNgay() << ", Loai benh nhan: " << lBenhNhan <<"\n";
        }
};
