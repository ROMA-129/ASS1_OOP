#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H 
#include<string>
using namespace std;
class SmartDevice {
protected:
	string deviceName;
public:
	SmartDevice(const string& name);
	virtual ~SmartDevice();
	virtual void performAction() = 0;
	string getDeviceName() const;
};
#endif 