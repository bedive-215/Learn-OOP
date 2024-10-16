#include "NVVP.h"

NVVP::NVVP()
{
}

NVVP::~NVVP()
{
}

void NVVP::input()
{
	NV::input();

	cout << "\nNhap vao so ngay lam viec: ";
	cin >> songaylamviec;
}

void NVVP::output()
{
	cout << "\n-------------------------------------------";
	NV::output();
	cout << "\nSo ngay ngay nhan vien nay lam viec: " << songaylamviec;
	cout << "\nLuong duoc cong ty tra: " << TienLuong();
	cout << "\n-------------------------------------------";
}

long long NVVP::TienLuong()
{
	long long luong = songaylamviec * 100000;
	return luong;
}
bool NVVP::checkNVVP()
{
	return true;
}
bool NVVP::checkNVSX()
{
	return false;
}
