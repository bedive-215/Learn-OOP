#include "GH.h"
class GioHang : public GH {
private:
	HangHoa ds[100];
	int soMatHang;
public:
	GioHang();
	void them(HangHoa h, int soLuongMua);
	void them(HangHoa h);
	double tongTien();
	void hienThi();
};