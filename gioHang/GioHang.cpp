#include "GioHang.h"
#include <iostream>
using namespace std;
GioHang::GioHang() {
	this->soMatHang = 0;
}
void GioHang::them(HangHoa h, int soLuongMua) 
{
	if (soMatHang < 100) {
		for (int i = 0; i < soMatHang; i++) {
			if (ds[i].getMa() == h.getMa()) {
				ds[i].setSoLuongMua(ds[i].getSoLuongMua() + soLuongMua);
				return;
			}
		}
		ds[soMatHang] = h;
		ds[soMatHang].setSoLuongMua(soLuongMua);
		soMatHang++;
	}
}

void GioHang::them(HangHoa h) {
	them(h, 1);
}


double GioHang::tongTien()
{
	double tien = 0.0;
	for (int i = 0; i < this->soMatHang; i++)
		tien += ds[i].getGia() * ds[i].getSoLuongMua();
	return tien;
}

void GioHang::hienThi() {
	for (int i = 0; i < this->soMatHang; i++) {
		cout << ds[i] << " " << ds[i].getSoLuongMua() << endl;
	}
}
