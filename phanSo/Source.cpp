#include "PhanSo.h"
PhanSo::PhanSo() {
	this->tu = 0;
	this->mau = 1;
}
PhanSo::PhanSo(int tu) {
	this->tu = tu;
	this->mau = 1;
}
PhanSo::PhanSo(int tu, int mau) {
	try {
		if (mau == 0) {
			throw runtime_error("Mau so khong hop le!");
		}
	}
	catch (const std::runtime_error& e) {
		cerr << "Ngoai le: " << e.what() << endl;
		exit(0);
	}
	this->tu = tu;
	this->mau = mau;
	this->rutGon();

}

int PhanSo::UCLN(int x, int y) {
	x = abs(x);
	y = abs(y);
	while (x * y > 0)
		if (x > y)x = x - y;
		else y = y - x;
	return x + y;
}

PhanSo PhanSo::rutGon() {
	int u = PhanSo::UCLN(this->tu, this->mau);
	this->tu /= u;
	this->mau /= u;
	return *this;
}
PhanSo PhanSo::cong(PhanSo p, PhanSo q) {
	PhanSo r;
	r.tu = p.tu * q.mau + p.mau * q.tu;
	r.mau = p.mau * q.mau;
	return r.rutGon();
}
PhanSo PhanSo::nhan(PhanSo p, PhanSo q) {
	PhanSo r;
	r.tu = p.tu * q.tu;
	r.mau = p.mau * q.mau;
	return r.rutGon();
}
PhanSo operator+(PhanSo p, PhanSo q) {
	return PhanSo::cong(p, q);
}
PhanSo operator-(PhanSo p, PhanSo q) {
	return PhanSo::cong(p, -1*q);
}

PhanSo operator*(PhanSo p, PhanSo q) {
	return PhanSo::nhan(p, q);
}

PhanSo operator/(PhanSo p, PhanSo q){
	int temp = q.tu;
	q.tu = q.mau;
	q.mau = temp;
	return PhanSo::nhan(p, q);
}

ostream& operator<<(ostream& os, PhanSo p) {
	if (p.mau == 1)
		os << p.tu;
	else
		os << p.tu << "/" << p.mau;
	return os;//cout<<p<<q<<r;
}

istream& operator>>(istream& is, PhanSo& p) {
	is >> p.tu;
	do {
		is >> p.mau;
		if (p.mau == 0) {
			cerr << "Loi: Mau so khong the bang 0. Vui long nhap lai mau so: ";
		}
	} while (p.mau == 0);
	return is;
}
