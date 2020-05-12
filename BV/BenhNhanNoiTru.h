#include <iostream> 
#include <fstream>
#include <vector>
#include "DateTime.h"
#include <sstream>
using namespace std; 
  
class BenhNhanNoiTru { 
private: 
    int maSo=0;
	string khoa;
	int soGiuong;
    DateTime ngayNhapVien;
	DateTime ngayXuatVien;
  
public: 
    // Parameterized Constructor 
    BenhNhanNoiTru(){

    }
    BenhNhanNoiTru(int ms, string kh, int sGiuong) 
    { 
        maSo = ms;
        khoa = kh; 
        soGiuong = sGiuong;
    } 
    void setMaSo(int ms){
        maSo = ms; 
    }
    void setKhoa(string kh){
        khoa = kh; 
    }
    void setSoGiuong(int sGiuong){
        soGiuong = sGiuong; 
    }
    int getMaSo() 
    { 
        return maSo;
    } 
    string getKhoa() 
    { 
        return khoa; 
    } 
    int getSoGiuong() 
    { 
        return soGiuong; 
    } 

    void nhap(int ms){
        maSo = ms;

        cout << "Nhap Khoa:";
        getline(cin, khoa);

        cout << "Nhap So Giuong:";

        string sGiuong;
        getline(cin, sGiuong);
        soGiuong = atoi(sGiuong.c_str());

        cout << "Ngay nhap vien:";
        ngayNhapVien.nhap();

        cout << "Ngay xuat vien:";
        ngayXuatVien.nhap();
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
        std::ifstream file("BenhNhanNoiTru.txt");
        std::string str; 
        // Read each line
        while (std::getline(file, str)) {
            vector<string> v = split (str, ',');
            cout<<v[0];
        }
    }
    void save(){
        ofstream myfile;
        myfile.open ("BenhNhanNoiTru.txt", std::ios_base::app);
        myfile << getMaSo() << "," << getKhoa() << "," << ngayNhapVien.getNgay() << "," << ngayXuatVien.getNgay() << "," << getSoGiuong() << "\n"; 
        myfile.close();
    }
    string xuat(){
        return ", Khoa: " + getKhoa() + ", So Giuong: " + to_string(getSoGiuong()) + "\n"; 
    }
}; 
  