#include"SmartHome.h"
int main() {
	SmartDevice* devices[MAX_DEVICES] = { nullptr };
	int count = 0;
	creatAll(devices, count);
	activateAll(devices, count);
	for (int i = 0;i < count;i++) {
		delete devices[i];
		devices[i] = nullptr;
	}
	return 0;
}