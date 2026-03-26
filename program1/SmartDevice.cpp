#include"SmartDevice.h"
SmartDevice::SmartDevice(const string& name) : deviceName(name) {}
SmartDevice::~SmartDevice() {}
string SmartDevice::getDeviceName() const {
	return deviceName;
}

