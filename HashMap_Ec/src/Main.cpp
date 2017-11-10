#include <iostream>
#include <stdio.h>
#include "HashEntry.h"

using namespace std;

int main() {
	float a = 20;
	HashEntry<typeof(a)> e(1,a);

	cout << "key:" << e.getKey() << endl;
	cout << "value:" << e.getValue() << endl;


	cout << "Hello World" << endl; // prints HashMap Implementation

	return 0;
}
