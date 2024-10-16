#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class SV
{
protected:
	string MSSV;
	string Name;
	string Address;
	int tongSoTinChi;
	double DTB;
public:
	SV();
	~SV();
	virtual void input();
	virtual void output();
	double getDTB();
	virtual bool checkSVDH() = 0;
	virtual bool TotNghiep() = 0;
};