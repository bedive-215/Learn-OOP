#pragma once
#include <string>
using namespace std;
class HangHoa {
private:
	int ma;
	string ten;
	double gia;
	int soLuongMua;
public:
	HangHoa();
	HangHoa(int ma, string ten, double gia);
	void setSoLuongMua(int _SoLuongMua);
	int getSoLuongMua();
	double getGia();
	int getMa();
	friend ostream& operator<<(ostream& os, HangHoa h);
};