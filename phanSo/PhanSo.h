#pragma once
#include <iostream>
using namespace std;
class PhanSo {
private:
	int tu, mau;
	PhanSo rutGon();
	static int UCLN(int x, int y);
public:
	PhanSo();//1
	PhanSo(int tu);//2
	PhanSo(int tu, int mau);//3
	static PhanSo cong(PhanSo p, PhanSo q);
	static PhanSo nhan(PhanSo p, PhanSo q);

	friend PhanSo operator+(PhanSo p, PhanSo q);
	friend PhanSo operator-(PhanSo p, PhanSo q);
	friend PhanSo operator*(PhanSo p, PhanSo q);
	friend PhanSo operator/(PhanSo p, PhanSo q);

	friend ostream& operator<<(ostream& os, PhanSo p);
	friend istream& operator>>(istream& is, PhanSo &p);

};