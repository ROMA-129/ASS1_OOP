#ifndef SMAERLIGHT_H
#define SMARTLIGHT_H
#include"SmartDevice.h"
class SmartLight : public SmartDevice {
public:
	SmartLight(const string& name);
	void performAction() override;
};
#endif
