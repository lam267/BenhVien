#include <iostream> 
#include <fstream>
#include <vector>
#include <sstream>
using namespace std; 
  
class BenhNhan { 
private: 
    int maSo;
	string hoTen;
	string gioiTinh;
	string chanDoan;
  
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
    int getMaSo() 
    { 
        return maSo; 
    } 
    string getHoTen() 
    { 
        return hoTen; 
    } 

    void nhap(int maso){
        maSo = maso;

        cout << "Nhap Ho Ten:";
        getline(cin, hoTen);

        cout << "Nhap Gioi Tinh:";
        getline(cin, gioiTinh);

        cout << "Nhap Chan Doan:";
        getline(cin, chanDoan);


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
        myfile.open ("BenhNhan.txt", std::ios_base::app);
        myfile << maSo << "," << hoTen << "," << gioiTinh << "," << chanDoan << "\n"; 
        myfile.close();
    }
    void Xuat(){
        cout << "Ma HS: " << maSo << ", Ho ten: " << hoTen << ", Gioi tinh: " << gioiTinh << ", Chan doan: " << chanDoan << "\n"; 
    }
}; 
  