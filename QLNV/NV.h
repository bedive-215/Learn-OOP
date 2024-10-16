#pragma once
#include <iostream>
#include <string>
using namespace std;

class NV
{
protected:
	string name;
	string ngaysinh;
public:
	NV();
	~NV();
	static string chuanhoa(string);
	string getName();
	virtual void input();
	virtual void output();
	virtual long long TienLuong() = 0;
	virtual bool checkNVVP() = 0;
	virtual bool checkNVSX() = 0;
};

