#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class DateTime { 
protected: 
	int ngay, thang, nam;
	int gio=0, phut=0, giay=0;
public:
	DateTime(){

	}
	DateTime(int _ngay, int _thang, int _nam){
		ngay = _ngay;
		thang = _thang;
		nam = _nam;
	}
	DateTime (int _ngay, int _thang, int _nam, int _gio, int _phut, int _giay){
		ngay = _ngay;
		thang = _thang;
		nam = _nam;
		gio = _gio;
		phut = _phut;
		giay = _giay;

	}
	void nhap()
	{
		cout << "Ngay:";cin >> ngay;
		cout << "Thang:";cin >> thang;
		cout << "Nam:";cin >> nam;
	}

	string now(){
		std::time_t t = std::time(0);
		std::tm* now = std::localtime(&t);
		nam = now->tm_year + 1900;
		thang = now->tm_mon + 1;
		ngay = now->tm_mday;
		gio = now->tm_hour;
		phut = now->tm_min;
		giay = now->tm_sec;
		return to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam) + " " + to_string(gio) + ":" + to_string(phut) + ":" + to_string(giay);
	}
	string getNgay(){
		return to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam);
	}
	string hienThi(){
		return to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam) + " " + to_string(gio) + ":" + to_string(phut) + ":" + to_string(giay);
	}
};

