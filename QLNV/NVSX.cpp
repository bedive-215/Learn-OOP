#include "NVSX.h"

NVSX::NVSX()
{
}

NVSX::~NVSX()
{
}

void NVSX::input()
{
	NV::input();

	cout << "\nNhap luong can ban: ";
	cin >> luongcanban;
	cout << "\nNhap so san pham lam duoc: ";
	cin >> sosanpham;
}

void NVSX::output()
{
	cout << "\n-------------------------------------------";
	NV::output();
	cout << "\nLuong can ban: " << luongcanban;
	cout << "\nSo san pham lam duoc: " << sosanpham;
	cout << "\nLuong duoc cong ty tra: " << TienLuong();
	cout << "\n-------------------------------------------";
}

long long NVSX::TienLuong()
{
	long long luong = luongcanban + sosanpham * 5000;
	return luong;
}

bool NVSX::checkNVVP()
{
	return false;
}

bool NVSX::checkNVSX()
{
	return true;
}
