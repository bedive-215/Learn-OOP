#include <iostream>
#include "PhanSo.h"
using namespace std;

int main()
{
	PhanSo* x = new PhanSo();
	PhanSo p(1, 2), q(1, 2);
	PhanSo add = p + q;
	PhanSo sub = p - q;
	PhanSo mov = p * q;
	PhanSo div = p / q;
	cout << add << endl;
	cout << sub << endl;
	cout << mov << endl;
	cout << div << endl;
	return 0;
}