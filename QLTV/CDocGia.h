#pragma once
#include <iostream>
#include <string>

using namespace std;

class CDocGia {
protected:
	string hoTen;
	string ngayLapThe;//dd/mm/yy
	int soThangCoHieuLuc;
public:
	virtual int Tinh_Tien_Lam_The() = 0;
	CDocGia();
	~CDocGia();
	virtual void input();
	virtual void output();
};