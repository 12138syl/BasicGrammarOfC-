#include <iostream>

using namespace std;

int getNumber(int index) {
	if (index == 1 || index == 2) {
		return 1;
	}
	return getNumber(index - 1) + getNumber(index - 2);
}