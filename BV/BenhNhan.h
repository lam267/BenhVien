#include <iostream> 
#include <fstream>
#include <vector>
#include <sstream>
#include "DateTime.h"
using namespace std; 
  
class BenhNhan: public DateTime{ 
private: 
    int maSo;
	string hoTen;
	string gioiTinh;
	string chanDoan;
    int loaiBenhNhan;
    DateTime ngaySinh;
  
public: 
    // Parameterized Constructor 
    BenhNhan();
    BenhNhan(int ms, string hten);
    BenhNhan(int ms, string hten, string gTinh, string cDoan);
    void setMaSo(int ms);
    void setHoTen(string hTen);
    void setGioiTinh(string gTinh);
    void setChanDoan(string cDoan);
    void setLoaiBenhNhan(int lBenhNhan);
    
    int getMaSo(); 
    string getHoTen();
    string getGioiTinh();
    string getChanDoan();
    int getLoaiBenhNhan(); 

    void nhap(int maso, int loaiBenhNhan);
    vector<string> split (const string &s, char delim);
    void read();
    void save();
    string xuat();
}; 
  