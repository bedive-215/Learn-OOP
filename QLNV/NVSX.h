#pragma once
#include "NV.h"
class NVSX : public NV
{
private:
	long long luongcanban;
	int sosanpham;
public:
	NVSX();
	~NVSX();
	void input();
	void output();
	long long TienLuong();
	bool checkNVVP();
	bool checkNVSX();
};

