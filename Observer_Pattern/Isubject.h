#pragma once
class IObsever;
class Chukenh {
public:
	virtual void dabatthongbao(IObsever*) = 0;
	virtual void datatthongbao(IObsever*) = 0;
	virtual void notifyObservers() = 0;
};