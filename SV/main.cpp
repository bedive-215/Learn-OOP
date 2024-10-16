#include "SV.h"
#include "SVDH.h"
#include "SVCD.h"

int main() {
	vector<SV*> ds_sinhvien;
	int lc;
	while (true) {
		cout << "\n\n\t\t===========DANH SACH SINH VIEN TRUONG===============";
		cout << "\n\t 1.Nhap sinh he dai hoc";
		cout << "\n\t 2.Nhap sinh he cao dang";
		cout << "\n\t 3.Xuat danh sach cac sinh vien";
		cout << "\n\t 4.Xuat danh sach cac sinh vien du dieu kien tot ngiep";
		cout << "\n\t 5.Xuat danh sach cac sinh vien khong du dieu kien tot nghiep";
		cout << "\n\t 6.Sinh vien co diem trung binh cao nhat";
		cout << "\n\t 7.Sinh vien dai hoc nao co diem trung binh cao nhat";
		cout << "\n\t 8.Thoat";
		cout << "\n\n\t\t====================================================";
		cout << "\n\n\t\tNhap lua chon: ";
		cin >> lc;
		
		if (lc == 1) {
			SV *x = new SVDH;
			x->input();
			ds_sinhvien.push_back(x);
		}
		if (lc == 2) {
			SV *x = new SVCD;
			x->input();
			ds_sinhvien.push_back(x);
		}
		if (lc == 3) {
			if (ds_sinhvien.empty()) {
				cout << "\n\t Chua co sinh vien nao trong danh sach!!!";
			}
			for (int i = 0; i < ds_sinhvien.size(); i++) {
				ds_sinhvien[i]->output();
			}
		}
		if (lc == 4) {
			for (int i = 0; i < ds_sinhvien.size(); i++) {
				if (ds_sinhvien[i]->TotNghiep()) {
					ds_sinhvien[i]->output();
				
				}
			}
		}
		if (lc == 5) {
			for (int i = 0; i < ds_sinhvien.size(); i++) {
				if (!ds_sinhvien[i]->TotNghiep()) {
					ds_sinhvien[i]->output();
				}
			}
		}
		if (lc == 6) {
			double max = 0.0;
			int res = 0;
			for (int i = 0; i < ds_sinhvien.size(); i++) {
				if (ds_sinhvien[i]->getDTB() > max) {
					max = ds_sinhvien[i]->getDTB();
					res = i;
				}
			}
			cout << "\n\t Sinh vien co diem trung binh cao nhat: ";
			ds_sinhvien[res]->output();
		}
		if (lc == 7) {
			double max = 0.0;
			int res = -1;
			for (int i = 0; i < ds_sinhvien.size(); i++) {
				if (ds_sinhvien[i]->getDTB() > max && ds_sinhvien[i]->checkSVDH()) {
					max = ds_sinhvien[i]->getDTB();
					res = i;
				}
			}
			if (res != -1) {
				cout << "\n\t Sinh vien dai hoc co diem trung binh cao nhat: ";
				ds_sinhvien[res]->output();
			}
			cout << "\n\t Khong co sinh vien dai hoc nao trong danh sach!!!";
		}
		if (lc == 8) {
			for (int i = 0; i < ds_sinhvien.size(); i++) {
				delete ds_sinhvien[i];
			}
			break;
		}
	}
	return 0;
}