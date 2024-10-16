#include "CThuVien.h"

void CThuVien::input()
{
	int luachon;
	while (true) {
		system("cls");
		cout << "\n\n\t\t ============= THU VIEN X ==============";
		cout << "\n\t 1.Doc gia tre em";
		cout << "\n\t 2.Doc gia nguoi lon";
		cout << "\n\t 0.Thoat";
		cout << "\n\n\t\t ============= ===END=== ==============";
		cout << "\n Nhap lua chon: ";
		cin >> luachon;
		CDocGia* x; // khai bao contro lop cha.
		if (luachon == 1) {
			x = new CDocGiaTreEm;
			cout << "\n\n\t\t NHAP THONG TIN DOC GIA\n";
			x->input();
			ds_docgia.push_back(x);
		}
		if (luachon == 2) {
			x = new CDocGiaNguoiLon;
			cout << "\n\n\t\t NHAP THONG TIN DOC GIA\n";
			x->input();
			ds_docgia.push_back(x);
		}
	}
}

void CThuVien::output()
{
	for (int i = 0; i < ds_docgia.size(); i++) {
		ds_docgia[i]->output();
	}
}

int CThuVien::Tinh_Tong_Tien_Lam_The()
{
	int sum = 0;
	for (int i = 0; i < ds_docgia.size(); i++) {
		sum += ds_docgia[i]->Tinh_Tien_Lam_The();
	}
	return sum;
}

CThuVien::CThuVien()
{
}

CThuVien::~CThuVien()
{
}
