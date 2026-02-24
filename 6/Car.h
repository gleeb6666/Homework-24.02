#pragma once
#include <string>
#include <iostream>

using namespace std;

class Car {
	double maxfuel = 100;
public:

	double fuel;
	string number;
	string mark;

	double x;

	//Car(double fuel, string number, string mark, double x);

	Car& operator+=(double fuel);
	explicit operator bool() const;
	explicit operator double() const;

	Car& operator<<=(double x);
	Car& operator>>=(double x);
	
	friend ostream& operator<<(ostream& os, const Car& c);
	friend istream& operator>>(istream& is, Car & n);
};