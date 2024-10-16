#include "SV.h"

SV::SV()
{
}

SV::~SV()
{
}

void SV::input()
{
	cin.ignore();
	cout << "\nNhap ma sinh vien: ";
	getline(cin, MSSV);

	fflush(stdin);
	cout << "\nNhap ten sinh vien: ";
	getline(cin, Name);

	fflush(stdin);
	cout << "\nNhap dia chi: ";
	getline(cin, Address);

	cout << "\nNhap so tin chi: ";
	cin >> tongSoTinChi;

	cout << "\nNhap diem trung binh: ";
	cin >> DTB;
}

void SV::output()
{
	cout << "\nMa so sinh vien: " << MSSV;
	cout << "\nTen sinh vien: " << Name;
	cout << "\nDia chi: " << Address;
	cout << "\nTong so tin chi: " << tongSoTinChi;
	cout << "\nDiem trung binh: " << DTB;
}

double SV::getDTB() {
	return DTB;
}