#include "NV.h"
#include "NVSX.h"
#include "NVVP.h"
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;


int main() {
	vector<NV*> ds_nhanvien;
	int lc;
	while (true) {
		cout << "\n\n\t\t=========================NHAN VIEN=========================";
		cout << "\n\t 1. Nhap vao danh sach nhan vien san xuat";
		cout << "\n\t 2. Nhap vao danh sach nhan vien van phong";
		cout << "\n\t 3. Xuat danh sach nhan vien";
		cout << "\n\t 4. Tong luong ma cong ty phai tra cho nhan vien";
		cout << "\n\t 5. Nhan vien van phong co luong thap nha";
		cout << "\n\t 6. Tim nhan vien san xuat theo ho va ten";
		cout << "\n\t 7. So nhan vien co luong thap hon luong trung binh";
		cout << "\n\t 8. Thoat";
		cout << "\n\n\t\t============================END============================";

		cout << "\nNhap lua chon : "; cin >> lc;
		if (lc == 1) {
			NV* a = new NVSX;
			a->input();
			ds_nhanvien.push_back(a);
		}
		if (lc == 2) {
			NV* a = new NVVP;
			a->input();
			ds_nhanvien.push_back(a);
		}
		if (lc == 3) {
			for (int i = 0; i < ds_nhanvien.size(); i++) {
				ds_nhanvien[i]->output();
			}
		}
		if (lc == 4) {
			long long res = 0;
			for (int i = 0; i < ds_nhanvien.size(); i++) {
				res += ds_nhanvien[i]->TienLuong();
			}
			cout << "\n\t Tong luong ma cong ty phai tra cho nhan vien: " << res;
		}
		if (lc == 5) {
			int x = -1;
			long long min = 0;
			for (int i = 0; i < ds_nhanvien.size(); i++) {
				if (ds_nhanvien[i]->checkNVVP() && ds_nhanvien[i]->TienLuong() < min) {
					min = ds_nhanvien[i]->TienLuong();
					x = i;
				}
			}
			if (x != -1) {
				cout << "\n\t Nhan vien van phong co tien luong thap nhat: ";
				ds_nhanvien[x]->output();
			}
			else {
				cout << "\n\t Khong tim thay nhan vien nao trong danh sach!!!";
			}
		}
		if (lc == 6) {
			int k = -1;
			string n;
			cout << "\n\t Nhap ho va ten ban muon tim: ";
			cin.ignore();
			getline(cin, n);
			string name = NV::chuanhoa(n);
			
			for (int i = 0; i < ds_nhanvien.size(); i++) {
				if (ds_nhanvien[i]->checkNVSX() && ds_nhanvien[i]->getName().compare(name) == 0) {
					k = i;
				}
			}
			if (k != -1) {
				cout << "\n\t Nhan vien can tim la: ";
				ds_nhanvien[k]->output();
			}
			else {
				cout << "\n\t Khong tim thay nhan vien nay!!!";
			}
		}
		if (lc == 7) {
			int dem = 0;
			long long tongluong = 0, luongTB;
			for (int i = 0; i < ds_nhanvien.size(); i++) {
				tongluong += ds_nhanvien[i]->TienLuong();
			}
			luongTB = tongluong / ds_nhanvien.size();
			for (int i = 0; i < ds_nhanvien.size(); i++) {
				if (ds_nhanvien[i]->TienLuong() < luongTB) {
					dem++;
				}
			}
			cout << "\n\t So nhan vien co luong thap hon luong trung binh: " << dem;
		}
		if (lc == 8) {
			for (int i = 0; i < ds_nhanvien.size(); i++) {
				delete ds_nhanvien[i];
			}
			break;
		}
	}

	return 0;
}