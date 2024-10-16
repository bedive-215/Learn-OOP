#pragma once
#include "SV.h"
class SVCD : public SV
{
private:
	double DiemTotNghiep;
public:
	SVCD();
	~SVCD();
	void input();
	void output();
	bool TotNghiep();
	bool checkSVDH();
};

