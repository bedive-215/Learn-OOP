#include "SVCD.h"

SVCD::SVCD()
{
}

SVCD::~SVCD()
{
}

void SVCD::input()
{
	SV::input();
	cin.ignore();
	cout << "\nNhap diem tot nghiep: ";
	cin >> DiemTotNghiep;
}

void SVCD::output()
{
	cout << "\n-------------------------------------------------";
	SV::output();
	cout << "\nDiem tot nghiep: " << DiemTotNghiep;
	cout << "\n-------------------------------------------------";
}

bool SVCD::TotNghiep()
{
	bool check = false;
	if (tongSoTinChi >= 110 && DTB >= 5 && DiemTotNghiep >= 5) {
		check = true;
	}
	return check;
}

bool SVCD::checkSVDH()
{
	return false;
}
