#include <iostream>
#include "GioHang.h"
#include "HangHoa.h"
using namespace std;

void main() {
	GH* g = new GioHang();
	HangHoa h1 (1, "Dien thoai", 100.0);
	HangHoa h2 (2, "May tinh", 200);
	g->them(h1, 10);
	g->them(h1);
	g->them(h2, 5);
	g->hienThi();
	cout << h1 << h2;
	cout << g->tongTien();
}
