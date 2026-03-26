#ifndef SMARTHOME_H
#define SMARTHOME_H
#include"SmartDevice.h"
const int MAX_DEVICES = 5;
void creatAll(SmartDevice* devices[], int& count);
void activateAll(SmartDevice* devices[], int count);
#endif
