#include <iostream> 
#include <fstream>
#include <vector>
#include <sstream>
// #include "DateTime.h"
using namespace std; 
  
class BenhNhan{ 
private: 
    int maSo;
	string hoTen;
	string gioiTinh;
	string chanDoan;
    int loaiBenhNhan;
    // DateTime ngaySinh;
  
public: 
    // Parameterized Constructor 
    BenhNhan(){

    }
    BenhNhan(int ms, string hten) 
    { 
        maSo = ms; 
        hoTen = hten; 
    } 
    BenhNhan(int ms, string hten, string gTinh, string cDoan) 
    { 
        maSo = ms; 
        hoTen = hten; 
        gioiTinh = gTinh;
        chanDoan = cDoan;
    } 
    void setMaSo(int ms){
        maSo = ms; 
    }
    void setHoTen(string hTen){
        hoTen = hTen; 
    }
    void setGioiTinh(string gTinh){
        gioiTinh = gTinh; 
    }
    void setChanDoan(string cDoan){
        chanDoan = cDoan; 
    }
    void setLoaiBenhNhan(int lBenhNhan){
        loaiBenhNhan = lBenhNhan; 
    }
    
    int getMaSo() 
    { 
        return maSo; 
    } 
    string getHoTen() 
    { 
        return hoTen; 
    } 
    string getGioiTinh() 
    { 
        return gioiTinh; 
    } 
    string getChanDoan() 
    { 
        return chanDoan; 
    } 
    int getLoaiBenhNhan() 
    { 
        return loaiBenhNhan; 
    }  

    void nhap(int maso){
        maSo = maso;

        cout << "Nhap Ho Ten:";
        getline(cin, hoTen);

        cout << "Nhap Gioi Tinh:";
        getline(cin, gioiTinh);

        cout << "Nhap Chan Doan:";
        getline(cin, chanDoan);

        cout << "Loai benh nhan:";
        string lBenhNhan;
        getline(cin, lBenhNhan);
        loaiBenhNhan = atoi(lBenhNhan.c_str());

        cout << "Ngay sinh:";
        // ngaySinh.nhap();


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
        // Read each line
        while (std::getline(file, str)) {
            vector<string> v = split (str, ',');
            cout<<v[0];
        }
    }
    void save(){
        ofstream myfile;
        myfile.open ("DB/BenhNhan.txt", std::ios_base::app);
        // myfile << maSo << "," << hoTen << "," << gioiTinh << "," << chanDoan << "," << loaiBenhNhan << ","<< ngaySinh.getNgay() << "\n"; 
        myfile.close();
    }
    string xuat(){
        string loai = "";
        if(getLoaiBenhNhan() == 1){
            loai = "Noi tru";
        }
        else{
            loai = "Ngoai tru";
        }
        return "Ma HS: " + to_string(getMaSo()) + ", Ho ten: " + getHoTen() + ", Gioi tinh: " + getGioiTinh() + ", Chan doan: " + getChanDoan() + ", Loai benh nhan: " + loai; 
    }
}; 
  