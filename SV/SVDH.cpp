#include "SVDH.h"

SVDH::SVDH()
{
}

SVDH::~SVDH()
{
}

void SVDH::input()
{
	SV::input();
	cin.ignore();
	cout << "\nNhap ten luan van: ";
	getline(cin, tenLuanVan);

	cout << "\nNhap diem luan van: ";
	cin >> DiemLuanVan;
}

void SVDH::output()
{
	cout << "\n-------------------------------------------------";
	SV::output();
	cout << "\nTen luan van: " << tenLuanVan;
	cout << "\nDiem luan van: " << DiemLuanVan;
	cout << "\n-------------------------------------------------";

}

bool SVDH::TotNghiep()
{
	bool check = false;
	if (tongSoTinChi >= 145 && DTB >= 5 && DiemLuanVan >= 5) {
		check = true;
	}
	return check;
}

bool SVDH::checkSVDH()
{
	return true;
}
