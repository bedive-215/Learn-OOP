#include "NV.h"
#include <sstream>

string NV::chuanhoa(string a) {
	string res = "";
	stringstream ss(a);
	string token;
	while (ss >> token) {
		res += toupper(token[0]);
		for (int i = 1; i < token.length(); i++) {
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	return res;

}

string NV::getName()
{
	return name;
}

NV::NV()
{
}

NV::~NV()
{
}



void NV::input()
{
	cin.ignore();

	string a;
	cout << "\nNhap ten nhan vien: ";
	getline(cin, a);
	name = NV::chuanhoa(a);
	

	fflush(stdin);
	cout << "\nNhap ngay sinh (dd/mm/yy): ";
	getline(cin, ngaysinh);
}

void NV::output()
{
	cout << "\nTen nhan vien: " << name;
	cout << "\nNgay sinh: " << ngaysinh;
}
