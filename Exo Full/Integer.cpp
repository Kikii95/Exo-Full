#include "Integer.h"
#include <cmath>


Integer::Integer() : value(0) {}

Integer::Integer(int value) : value(value) {}

Integer Integer::operator+(const Integer& others) {
	return Integer(this->value + others.value);
}

Integer& Integer::operator+=(const Integer& others) {
	this->value += others.value;
	return *this;
}

Integer Integer::operator-(const Integer& others) {
	return Integer(this->value - others.value);
}

Integer& Integer::operator-=(const Integer& others) {
	this->value -= others.value;
	return *this;
} 

Integer Integer::operator*(const Integer& others) {
	return Integer(this->value * others.value);
}

Integer& Integer::operator*=(const Integer& others) {
	this->value *= others.value;
	return *this;
}

Integer Integer::pow(int exponent) {
	return Integer(std::pow(this->value, exponent));
}

std::ostream& operator<<(std::ostream& os, const Integer& obj) {
	  os << obj.value;
	return os;
}


