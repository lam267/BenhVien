#include <iostream> 
#include <fstream>
#include <vector>
#include <sstream>
#include "DateTime.h"
#include "BenhNhan.h"
  
BenhNhan::BenhNhan(){

}
BenhNhan::BenhNhan(int ms, string hten) 
{ 
    maSo = ms; 
    hoTen = hten; 
} 
BenhNhan::BenhNhan(int ms, string hten, string gTinh, string cDoan) 
{ 
    maSo = ms; 
    hoTen = hten; 
    gioiTinh = gTinh;
    chanDoan = cDoan;
} 
void BenhNhan::setMaSo(int ms){
    maSo = ms; 
}
void BenhNhan::setHoTen(string hTen){
    hoTen = hTen; 
}
void BenhNhan::setGioiTinh(string gTinh){
    gioiTinh = gTinh; 
}
void BenhNhan::setChanDoan(string cDoan){
    chanDoan = cDoan; 
}
void BenhNhan::setLoaiBenhNhan(int lBenhNhan){
    loaiBenhNhan = lBenhNhan; 
}

int BenhNhan::getMaSo() 
{ 
    return maSo; 
} 
string BenhNhan::getHoTen() 
{ 
    return hoTen; 
} 
string BenhNhan::getGioiTinh() 
{ 
    return gioiTinh; 
} 
string BenhNhan::getChanDoan() 
{ 
    return chanDoan; 
} 
int BenhNhan::getLoaiBenhNhan() 
{ 
    return loaiBenhNhan; 
}  

void BenhNhan::nhap(int maso, int lBenhNhan){
    maSo = maso;
    loaiBenhNhan = lBenhNhan;
    cin.ignore();
    cout << "Nhap Ho Ten:";
    getline(cin, hoTen);

    cout << "Nhap Gioi Tinh:";
    getline(cin, gioiTinh);

    cout << "Nhap Chan Doan:";
    getline(cin, chanDoan);

    cout << "Ngay sinh:";
    ngaySinh.nhap();


}
vector<string> BenhNhan::split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}
void BenhNhan::read(){
    std::ifstream file("BenhNhan.txt");
    std::string str; 
    // Read each line
    while (std::getline(file, str)) {
        vector<string> v = split (str, ',');
        cout<<v[0];
    }
}
void BenhNhan::save(){
    ofstream myfile;
    myfile.open ("DB/BenhNhan.txt", std::ios_base::app);
    myfile << maSo << "," << hoTen << "," << gioiTinh << "," << chanDoan << "," << ngaySinh.getNgay() << ","<< loaiBenhNhan << "\n"; 
    myfile.close();
}
string BenhNhan::xuat(){
    string loai = "";
    if(getLoaiBenhNhan() == 1){
        loai = "Noi tru";
    }
    else{
        loai = "Ngoai tru";
    }
    return "Ma HS: " + to_string(getMaSo()) + ", Ho ten: " + getHoTen() + ", Gioi tinh: " + getGioiTinh() + ", Chan doan: " + getChanDoan() + ", Loai benh nhan: " + loai; 
}
  