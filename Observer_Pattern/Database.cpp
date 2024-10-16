#include <string>
#include "Database.h"
#include <vector>
#include "Isubject.h"
#include "IObsever.h"

void channel::dabatthongbao(IObsever* o) {
		mObservers.push_back(o);
}

void channel::xuatVDMoi(std::string operation) {
		this->operation = operation;
		notifyObservers();
}

void channel::notifyObservers() {
	for (auto& o : mObservers) {
		o->update();
	}
}

channel::channel()
{
}

void channel::datatthongbao(IObsever* o)
{
	auto observer = find(mObservers.begin(), mObservers.end(), o);
	if (observer != mObservers.end()) {
		mObservers.erase(observer, observer + 1);
	}
}
