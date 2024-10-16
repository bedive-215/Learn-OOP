#include "CThuVien.h"

int main() {
	CThuVien *x = new CThuVien;
	x->input();
	x->output();
	cout << "\n\t TONG TIEN LAM THE: " << x->Tinh_Tong_Tien_Lam_The();
	delete x;
	system("pause");
	return 0;
}