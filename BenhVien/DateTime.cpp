#pragma once
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

class DateTime { 
public: 
	int ngay, thang, nam;
	int gio=0, phut=0, giay=0;
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
	vector<string> split (string s, char kitu) {
		vector<string> result;
		int i = 0;
		for(int j = 0; j < s.length();j++){
			if(s[j] == kitu){
				result.push_back(s.substr(i, j - i));
				i = j + 1;
			}
		}
		result.push_back(s.substr(i,  s.length() - i));
		return result;
	}
	// type dd/mm/yyyy
	void setDate(string date){
		vector<string> ngaythangnam = split (date, '/');
		ngay = stoi(ngaythangnam[0]);
		thang = stoi(ngaythangnam[1]);
		nam = stoi(ngaythangnam[2]);

	}
	string now(){
		time_t t = time(0);
		tm* now = localtime(&t);
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