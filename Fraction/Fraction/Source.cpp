#include "Header.h"
#include <iostream>
using namespace std;
PhanSo::PhanSo (){
	this->tuSo = 0;
	this->mauSo= 1;
}

void PhanSo::NhapPhanSo() {
	cout << "Nhap tu so : ";
	cin >> tuSo;
	cout << "Nhap mau so : ";
	cin >> mauSo;
	NgoaiLe(mauSo);


}

int PhanSo::GetTuSo() const {
	return tuSo;
}

int PhanSo::GetMauSo() const {
	return mauSo;
}

void PhanSo::NgoaiLe(int mauSo) {
	try {
		if (mauSo == 0) {
			throw runtime_error("Mau so khong hop le!");
		}
	}
	catch (const std::runtime_error& e) {
		cerr << "Ngoai le: " << e.what() << endl;
		exit(0);
	}
}

int PhanSo::GCD(int a, int b) {
	if (b == 0) return a;
	return GCD(b, a % b);
}

PhanSo PhanSo::RutGon() {
	int g = GCD(tuSo, mauSo);
	this->tuSo /= g;
	this->mauSo /= g;
}

void PhanSo::InPhanSo() const {

	cout << tuSo << "/" << mauSo << endl;
}

PhanSo PhanSo::Cong(PhanSo& psa, PhanSo& psb) {
	PhanSo Kq;
	Kq.tuSo = psa.tuSo * psb.mauSo + psb.tuSo * psa.mauSo;
	Kq.mauSo = psa.mauSo * psb.mauSo;
	return Kq;
}
