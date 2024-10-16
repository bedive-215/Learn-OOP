#pragma once
template<class T>
class Array
{
private:
	int size;
	T* arr;
public:
	Array();
	Array(int n);
	~Array();
	void Nhap();
	void Xuat();

};

