#pragma once
#include <string>
#include "Isubject.h"
#include <vector>
class channel : public Chukenh {
private:
	std::vector<IObsever*> mObservers;
	std::string operation;
public:

	channel();

	void datatthongbao(IObsever*);

	void dabatthongbao(IObsever*);

	void xuatVDMoi(std::string operation);

	void notifyObservers();
};