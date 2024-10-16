#pragma once
#include "CDocGia.h"
#include <iostream>
#include <string>
using namespace std;

class CDocGiaNguoiLon : public CDocGia
{
private:
	string CMND;
public:
	void input();
	void output();
	int Tinh_Tien_Lam_The();
	CDocGiaNguoiLon();
	~CDocGiaNguoiLon();
};

