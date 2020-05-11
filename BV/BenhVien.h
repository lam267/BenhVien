#include <iostream> 
#include <fstream>
#include <vector>
#include <sstream>
#include "BenhNhan.h"
using namespace std; 
  
class BenhVien { 
private: 
    vector<BenhNhan> listBenhNhan;
  
public: 
    // Parameterized Constructor 
    BenhVien(){

    }

    void nhap(int maso){
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
        std::ifstream file("BenhNhan.txt");
        std::string str; 
        while (std::getline(file, str)) {
        // process string ...
            vector<string> v = split (str, ',');
            BenhNhan bn;
            bn.setMaSo(atoi(v[0].c_str()));
            bn.setHoTen(v[1]);
            bn.setGioiTinh(v[2]);
            bn.setChanDoan(v[3]);
            listBenhNhan.push_back (bn);
        }
    }
    // void save(){
    //     ofstream myfile;
    //     myfile.open ("abc.txt", std::ios_base::app);
    //     myfile << maSo << "," << hoTen << "," << gioiTinh << "," << chanDoan << "\n"; 
    //     myfile.close();
    // }
    void xuat(){
        for (BenhNhan bn : listBenhNhan) {
            bn.Xuat();
        }
    }
}; 
  