#include"SmartThermostat.h"
#include<iostream>
using namespace std;
SmartThermostat:: SmartThermostat(const string& name): SmartDevice(name){}
void SmartThermostat::performAction() {
	cout << deviceName << "Setting Tempreature" << endl;
}
