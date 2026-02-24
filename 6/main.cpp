#include "Car.h"
#include <iostream>

int main() {
	Car a;
	cin >> a;
	cout << a << endl;
	a += 50;
	a >>= 40;
	cout << a << endl;
	a <<= 40;
	cout << a << endl;
	if (!bool(a)) {
		a += 20;
	}
	cout << a << endl;

	a <<= (double(a));
	cout << a << endl;


}