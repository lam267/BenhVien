#include <iostream> 
#include <fstream>
#include <vector>
#include <sstream>
#include "BenhNhan.h"
#include "BenhNhanNoiTru.h"
using namespace std; 
  
class BenhVien { 
private: 
    vector<BenhNhan> listBenhNhan;
    vector<BenhNhanNoiTru> listBenhNhanNoiTru;
  
public: 
    BenhVien(){

    }

    void nhap(){
        int maso = getMaBNMoi();
        BenhNhan benhnhan;
        benhnhan.nhap(maso);
        benhnhan.save();
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
        // process string ...
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
    void save(){
        // ofstream myfile;
        // myfile.open ("abc.txt", std::ios_base::app);
        // myfile << maSo << "," << hoTen << "," << gioiTinh << "," << chanDoan << "\n"; 
        // myfile.close();
    }
    int getMaBNMoi(){
        int maBNMoi = 1;
        for (BenhNhan bn : listBenhNhan) {
           if(maBNMoi > bn.getMaSo()){
               maBNMoi = bn.getMaSo();
           }
        }
        return maBNMoi;
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
            }
            else{
                cout<<bn.xuat()<<"\n";
            }
            
        }
    }
}; 
  