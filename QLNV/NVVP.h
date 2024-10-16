#pragma once
#include "NV.h"
class NVVP : public NV
{
private:
	int songaylamviec;
public:
	NVVP();
	~NVVP();
	void input();
	void output();
	long long TienLuong();
	bool checkNVVP();
	bool checkNVSX();
};

