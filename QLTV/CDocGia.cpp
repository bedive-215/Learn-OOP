#include "CDocGia.h"


// <kieudulieu> <tenlop> :: <thuoctinh/phuongthuc> 
CDocGia::CDocGia()
{
}

CDocGia::~CDocGia()
{
}

void CDocGia::input()
{
	//fflush(stdin);
	cin.ignore();
	cout << "\nNhap ten doc gia: ";
	getline(cin, hoTen);

	fflush(stdin);
	cout << "\nNhap ngay lap the (dd/mm/yy): ";
	getline(cin, ngayLapThe);

	cout << "\nNhap so thang co hieu luc: ";
	cin >> soThangCoHieuLuc;
}

void CDocGia::output()
{
	cout << "\nHo ten doc gia: " << hoTen;
	cout << "\nNgay lap the(dd/mm/yy): " << ngayLapThe;
	cout << "\nSo thang co hieu luc: " << soThangCoHieuLuc;
}
