#pragma once
#include "CDocGia.h"
#include <iostream>
#include <string>
using namespace std;

class CDocGiaTreEm : public CDocGia
{
private:
	string hoTenNDD;
public:
	void input();
	void output();
	int Tinh_Tien_Lam_The();
	CDocGiaTreEm();
	~CDocGiaTreEm();
};

