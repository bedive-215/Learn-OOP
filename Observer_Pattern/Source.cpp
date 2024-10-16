#include <iostream>
#include "Database.h"
#include "Client.h"

using namespace std;

int main() {
	channel Channel;
	channel gamervn;
	Subscriber ha;
	Subscriber quy;
	Subscriber trung;
	gamervn.dabatthongbao(&trung);
	gamervn.dabatthongbao(&ha);
	gamervn.dabatthongbao(&quy);
	Channel.dabatthongbao(& trung);
	Channel.datatthongbao(&trung);
	Channel.xuatVDMoi("Xuat mot vd moi");
	gamervn.xuatVDMoi("Xuat mot vd moi");
	return 0;
}