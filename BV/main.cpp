#include <iostream>
#include <cstdio>
// #include "BenhNhan.h"
#include "BenhVien.h"
using namespace std;

int main() {

    // Constructor called 
    // BenhNhan bn(1, "Nguyen Van A"); 
  
    // // Access values assigned by constructor 
    // cout << "p1.x = " << bn.getMaSo() << ", p1.y = " << bn.getHoTen(); 

    BenhVien bv;
    bv.read();
    // bv.nhap(3);
    bv.xuat();
    // bn.Nhap();
    // bn.save();
    // bn.Xuat();

}