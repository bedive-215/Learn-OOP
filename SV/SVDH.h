#pragma once
#include "SV.h"
class SVDH : public SV
{
private:
	string tenLuanVan;
	double DiemLuanVan;
public:
	SVDH();
	~SVDH();
	void input();
	void output();
	bool TotNghiep();
	bool checkSVDH();
};

