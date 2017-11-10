//============================================================================
// Name        : HashMap_Ec.cpp
// Author      : ChinYih_Ung
//============================================================================

#include <iostream>
#include "HashEntry.cpp"

using namespace std;

int main() {
	float a = 20;
	HashEntry<typeof(a)> e(1,a);

	cout << "key:" << e.getKey() << endl;
	cout << "value:" << e.getValue() << endl;


	cout << "Hello World" << endl; // prints HashMap Implementation

	return 0;
}
