#include "CDocGiaNguoiLon.h"

void CDocGiaNguoiLon::input()
{
	CDocGia::input();
	fflush(stdin);
	cout << "\nNhap vao so chung minh nhan dan: ";
	getline(cin, CMND);
}

void CDocGiaNguoiLon::output()
{
	CDocGia::output();
	cout << "\nSo CMND: " << CMND;
}

int CDocGiaNguoiLon::Tinh_Tien_Lam_The()
{
	return soThangCoHieuLuc * 10000;
}

CDocGiaNguoiLon::CDocGiaNguoiLon()
{
}

CDocGiaNguoiLon::~CDocGiaNguoiLon()
{
}
