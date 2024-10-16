#include "CDocGiaTreEm.h"

void CDocGiaTreEm::input()
{
	CDocGia::input();
	fflush(stdin);
	
	cout << "\nNhap ten nguoi dai dien: ";
	getline(cin, hoTenNDD);
}

void CDocGiaTreEm::output()
{
	CDocGia::output();
	cout << "\nHo ten nguoi dai dien: " << hoTenNDD;
}

int CDocGiaTreEm::Tinh_Tien_Lam_The()
{
	return soThangCoHieuLuc * 5000;;
}

CDocGiaTreEm::CDocGiaTreEm()
{
}

CDocGiaTreEm::~CDocGiaTreEm()
{
}
