#include "HangHoa.h"
#include <string>
#include <iostream>
using namespace std;

HangHoa::HangHoa() {

}

HangHoa::HangHoa(int ma, std::string ten, double gia ) {
	this->ma = ma;
	this->ten = ten;
	this->gia = gia;
}
double HangHoa::getGia() {
	return this->gia;
}

int HangHoa::getMa() {
	return this->ma;
}
int HangHoa::getSoLuongMua() {
	return this->soLuongMua;
}

void HangHoa::setSoLuongMua(int _SoLuongMua) {
	soLuongMua = _SoLuongMua;
}

ostream& operator<<(ostream& os, HangHoa h) {
	os << h.ma << " " << h.ten << " " << h.gia << endl;
	return os;
}