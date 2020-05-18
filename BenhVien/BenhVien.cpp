#include<iostream>
//#include "BenhNhan.cpp"
#include <vector>
#include "BenhNhanNoiTru.cpp"
#include "BenhNhanNgoaiTru.cpp"
using namespace std;

class BenhVien { 
public: 
    vector<BenhNhan> listBenhNhan;
    vector<BenhNhanNoiTru> listBenhNhanNoiTru;
	vector<BenhNhanNgoaiTru> listBenhNhanNgoaiTru;
	vector<string> split (string s, char kitu) {
	        vector<string> result;
	        int i = 0;
			for(int j = 0; j < s.length();j++){
				if(s[j] == kitu){
					result.push_back(s.substr(i, j - i));
	//				cout << "[" << i << "," << j << "]: " << s.substr(i, j - i) << endl;
					i = j + 1;
				}
			}
			result.push_back(s.substr(i,  s.length() - i));
	//		cout << "[" << i << "," << s.length() << "]: " << s.substr(i,  s.length() - i) << endl;
	        return result;
	}
	void readBenhNhan(){
		ifstream file("BenhNhan.txt");
	    string str; 
	    while (getline(file, str)) {
	        vector<string> benhnhan = split (str, ',');
	    	if(benhnhan.size() > 5){
	    		BenhNhan bn;
	    		bn.maSo = stoi(benhnhan[0]);
	    		bn.hoTen = benhnhan[1];
				bn.gioiTinh = benhnhan[2];
				bn.chanDoan = benhnhan[3];
				bn.ngaySinh.setDate(benhnhan[4]);
				bn.loaiBenhNhan = stoi(benhnhan[5]);
	    		listBenhNhan.push_back (bn);
	    	}
	    }
	}
	BenhNhan getBenhNhan(int maSo){
		BenhNhan benhnhan;
		for (BenhNhan bn : listBenhNhan) {
           if(bn.maSo == maSo){
			   benhnhan = bn;
			   break;
           }
        }
		return benhnhan;
	}
	void readBenhNhanNoiTru(){
		ifstream file("BenhNhanNoiTru.txt");
	    string str; 
	    while (getline(file, str)) {
	        vector<string> benhnhan = split (str, ',');
	    	if(benhnhan.size() > 5){
	    		BenhNhanNoiTru bn;
	    		bn.maSo = stoi(benhnhan[0]);
	    		bn.tenKhoa = benhnhan[1];
				bn.soGiuong = benhnhan[2];
				bn.ngayNhapVien.setDate(benhnhan[3]);
				bn.ngayXuatVien.setDate(benhnhan[4]);
				bn.benhNhan = getBenhNhan(bn.maSo);
	    		listBenhNhanNoiTru.push_back (bn);
	    	}
	    }
	}
	int getMaBNMoi(){
		int maBNMoi = 0;
        for (BenhNhan bn : listBenhNhan) {
           if(maBNMoi < bn.maSo){
               maBNMoi = bn.maSo;
           }
        }
        return maBNMoi + 1;
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
	    
	    if(loaiBenhNhan == 1){
	        BenhNhanNoiTru bnnoitru;
	    	bnnoitru.nhap(maso, loaiBenhNhan);
	    }
		if(loaiBenhNhan == 2){
	        BenhNhanNgoaiTru bnngoaitru;
	    	bnngoaitru.nhap(maso, loaiBenhNhan);
	    }
	//	BenhNhan bn;
	//	bn.nhap();
	//	bn.save();
	//	bn.display();
	}
};
#include <iostream>
#include <string>
using namespace std;
int main()
{
	BenhVien bv;
	bv.readBenhNhan();
	for (int i = 0; i < bv.listBenhNhan.size();i++){
		BenhNhan bn = bv.listBenhNhan[i];
		bn.display();
	}
	// bv.nhapBenhNhan();
	bv.readBenhNhanNoiTru();
	for (int i = 0; i < bv.listBenhNhanNoiTru.size();i++){
		BenhNhanNoiTru bn = bv.listBenhNhanNoiTru[i];
		bn.display();
	}
	return 0;
	int Luachon;
	do {
		cout << "----------------Menu-----------------\n";
		cout << "1.Nhap benh nhan:\n";
		cout << "2.Tim kiem benh nhan:\n";
		cout << "3.Thong ke benh nhan:\n";
		cout << "4.Tro ve:\n";
		cout << "Nhap Lua chon:";cin >> Luachon;
		switch (Luachon)
		{
		case 1:
			bv.nhapBenhNhan();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}
	} while (Luachon != 4);

}
