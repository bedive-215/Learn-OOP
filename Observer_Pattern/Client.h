#pragma once
#include "Isubject.h"
#include "IObsever.h"
class Subscriber : public IObsever {
public:
	Subscriber();
	void update();
};