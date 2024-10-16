#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "CDocGiaTreEm.h"
#include "CDocGiaNguoiLon.h"
#include <vector>

class CThuVien
{
private:
	vector<CDocGia *> ds_docgia;// mang 1 chieu chua lop cha vi co virtual nen se da hinh theo tung con tuong ung
public:
	void input();
	void output();
	int Tinh_Tong_Tien_Lam_The();
	CThuVien();
	~CThuVien();
};

