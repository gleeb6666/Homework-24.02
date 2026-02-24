#include <iostream>
#include "Car.h"


//Car::Car(double fuel, string number, string mark, double x) {
//
//	this->fuel = fuel;
//	this->number = number;
//	this->mark = mark;
//	this->x = x;
//};

Car& Car::operator+=(double fuel) {
	this ->fuel += fuel;
	if (fuel > maxfuel) {
		this->fuel = maxfuel;
	}
	return *this;
}

Car::operator bool() const {
	return fuel != 0;
}

Car::operator double() const {
	return x;
}

Car& Car::operator<<=(double x) {
	if (fuel >= x) {
		fuel -= x;
		this->x -= x;
	}
	else {
		this->x -= fuel;
		fuel = 0;
	}
	return *this;
}

Car& Car::operator>>=(double x) {
	if (fuel >= x) {
		fuel -= x;
		this->x += x;
	}
	else {
		this->x += fuel;
		fuel = 0;
	}
	return *this;
}

ostream& operator<<(ostream& os, const Car& c) {
	os << c.mark << " " << c.number << " fuel:" << c.fuel << "/" << c.maxfuel << " x:" << c.x;
	return os;
}

istream& operator>>(istream& is, Car& n) {
	
	cout << "Mark: ";
	is >> n.mark;
	cout << "Number: ";
	is >> n.number;
	cout << "Fuel: ";
	is >> n.fuel;
	cout << "X pos: ";
	is >> n.x;
	return is;
	
}