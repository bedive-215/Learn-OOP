#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	PhanSo a(1,0);
	PhanSo b,c;
	a.NhapPhanSo();
	a.GetTuSo();
	a.GetMauSo();
	cout << "Phan so ban da nhap la : ";
	a.InPhanSo();
	a.RutGon();
	cout << "Phan so sau khi rut gon : ";
	a.InPhanSo();

	b.NhapPhanSo();
	b.GetTuSo();
	b.GetMauSo();
	b.InPhanSo();

	PhanSo Kq =c.Cong(a,b);
	Kq.RutGon();
	Kq.InPhanSo();
	return 0;
}
