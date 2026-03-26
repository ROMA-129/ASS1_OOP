#include"SmartLight.h"
#include<iostream>
using namespace std;
SmartLight::SmartLight(const string& name) : SmartDevice(name){}
void SmartLight::performAction() {
	cout << deviceName << "Adjusting Brightness" << endl;
 }