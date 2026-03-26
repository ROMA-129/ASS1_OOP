#include"SmartHome.h"
#include"SmartLight.h"
#include"SmartThermostat.h"
#include<iostream>
#include<string>
using namespace std;
void creatAll(SmartDevice* devices[], int& count) {
	count = 0;
	cout << "-----Smart Home Setup-----" << endl;
	cout << "Available device:" << endl;
	cout << "L - SmartLight" << endl;
	cout << "T - SmartThermostat " << endl;
	cout << "X - finish(minimum 1 device required)" << endl;
	cout << "You may add up to" << MAX_DEVICES << "Devices"<< endl;
	
	
	while (count < MAX_DEVICES) {
		string choice;
		cout << "Enter device type(L/T/X):";
		cin >> choice;

		if (!choice.empty()) {
			choice[0] = toupper(choice[0]);
		}
		if (choice == "X") {
			if (count == 0) {
				cout << "You must create at least 1 device.please add a device first" << endl;
				continue;
			}
			break;
		}

		string name;
		if (choice == "L") {
			cout << "Enter a name for smart light:";
			cin >> name;
			devices[count] = new SmartLight(name);
			cout<<"SmartLight "<<name<<"created"<< endl;
			count++;
		}
		else if (choice == "T") {
			cout << "Enter a name for the SmartThermostat:";
			cin >> name;
			devices[count] = new SmartThermostat(name);
			cout << "SmartTHermostat" << name << "created" << endl;
			count++;
		}
		else {
			cout << "Invalid option,Please enter L,T,X" << endl;
		}
		if (count == MAX_DEVICES) {
			cout << "Maximum number of devices (" << MAX_DEVICES << ") reached." << endl;
		}
	}

	cout << endl;
	cout << count << " device(s) created successfully." << endl;
}

void activateAll(SmartDevice* devices[], int count) {
	cout << endl;
	cout << "-----Activating All Devices-----" << endl;

	for (int i = 0; i < count; i++) {
		devices[i]->performAction();
	}

	cout << "-----Activation Complete-----" << endl;
}
