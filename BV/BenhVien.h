#include <iostream> 
#include <fstream>
#include <vector>
#include <sstream>
#include "BenhNhan.cpp"
#include "BenhNhanNoiTru.h"
using namespace std; 
  
class BenhVien { 
private: 
    vector<BenhNhan> listBenhNhan;
    vector<BenhNhanNoiTru> listBenhNhanNoiTru;
  
public: 
    BenhVien(){

    }

    void nhapBenhNhan(){
        int maso = getMaBNMoi();
        int loaiBenhNhan;
        cout << "----------------Chon loai benh nhan-----------------\n";
		cout << "1.Benh nhan noi tru:\n";
		cout << "2.Benh nhan ngoai tru:\n";
		cout << "3.Benh nhan chuyen vien:\n";
		cout << "4.Tro ve:\n";
		cout << "Nhap Lua chon:";cin >> loaiBenhNhan;
        BenhNhan benhnhan;
        benhnhan.nhap(maso, loaiBenhNhan);
        benhnhan.save();
        if(loaiBenhNhan == 1){
            BenhNhanNoiTru bnnoitru;
            bnnoitru.nhap(maso);
            bnnoitru.save();
        }
        else{

        }
       
    }
    vector<string> split (const string &s, char delim) {
        vector<string> result;
        stringstream ss (s);
        string item;

        while (getline (ss, item, delim)) {
            result.push_back (item);
        }

        return result;
    }
    void read(){
        readBN();
        readBNNT();
    }
    void readBN(){
        std::ifstream file("DB/BenhNhan.txt");
        std::string str; 
        while (std::getline(file, str)) {
            vector<string> v = split (str, ',');
            BenhNhan bn;
            bn.setMaSo(atoi(v[0].c_str()));
            bn.setHoTen(v[1]);
            bn.setGioiTinh(v[2]);
            bn.setChanDoan(v[3]);
            bn.setLoaiBenhNhan(atoi(v[4].c_str()));
            listBenhNhan.push_back (bn);
        }
    }
    void readBNNT(){
        std::ifstream file("DB/BenhNhanNoiTru.txt");
        std::string str; 
        while (std::getline(file, str)) {
        // process string ...
            vector<string> v = split (str, ',');
            BenhNhanNoiTru bnnt;
            bnnt.setMaSo(atoi(v[0].c_str()));
            bnnt.setKhoa(v[1]);
            int soGiuong = atoi(v[2].c_str());
            bnnt.setSoGiuong(soGiuong);
            listBenhNhanNoiTru.push_back (bnnt);
        }
    }
    int getMaBNMoi(){
        int maBNMoi = 0;
        for (BenhNhan bn : listBenhNhan) {
           if(maBNMoi < bn.getMaSo()){
               maBNMoi = bn.getMaSo();
           }
        }
        return maBNMoi + 1;
    }
    BenhNhanNoiTru getBenhNhanNoiTru(int maBenhNhan){
        BenhNhanNoiTru bnnoitru;
        for (BenhNhanNoiTru bnnt : listBenhNhanNoiTru) {
            if(bnnt.getMaSo() == maBenhNhan){
                bnnoitru = bnnt;
                break;
            }
        }
        return bnnoitru;
    }

    void xuat(){
        for (BenhNhan bn : listBenhNhan) {
            if (bn.getLoaiBenhNhan() == 1){
                BenhNhanNoiTru bnnoitru = getBenhNhanNoiTru(bn.getMaSo());
                cout<<bn.xuat();
                if(bnnoitru.getMaSo()){
                    cout<<bnnoitru.xuat();
                }
                else{
                    cout<<"\n";
                }
            }
            else{
                cout<<bn.xuat()<<"\n";
            }
            
        }
    }
}; 
  