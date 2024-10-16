#include <iostream>
#include "Array.h"
#include "Array.cpp"

using namespace std;

int main() {
	Array<int> a(2); // mang a kieu int 2 phan tu
	Array<double> b(10);
	a.Nhap();
	a.Xuat();
	return 0;
}