#ifndef SMARTTHERMOSTAT_H
#define SMARTTHERMOSTAT_H
#include"SmartDevice.h"
class SmartThermostat : public SmartDevice {
public:
	SmartThermostat(const string& name);
	void performAction() override;
};
#endif
