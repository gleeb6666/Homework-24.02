#include "ModNumber.h"

int ModNumber::normalize(long long v) {
    int r = v % M;
    if (r < 0) r += M;
    return r;
}

ModNumber::ModNumber() : value(0) {}
ModNumber::ModNumber(int v) : value(normalize(v)) {}
ModNumber::ModNumber(const ModNumber& other) : value(other.value) {}

ModNumber ModNumber::operator+(const ModNumber& rhs) const { return ModNumber(value + rhs.value); }
ModNumber ModNumber::operator-(const ModNumber& rhs) const { return ModNumber(value - rhs.value); }
ModNumber ModNumber::operator*(const ModNumber& rhs) const { return ModNumber((long long)value * rhs.value); }

ModNumber ModNumber::operator+(int rhs) const { return ModNumber(value + rhs); }
ModNumber ModNumber::operator-(int rhs) const { return ModNumber(value - rhs); }
ModNumber ModNumber::operator*(int rhs) const { return ModNumber((long long)value * rhs); }

ModNumber operator+(int lhs, const ModNumber& rhs) { return ModNumber(lhs + rhs.value); }
ModNumber operator-(int lhs, const ModNumber& rhs) { return ModNumber(lhs - rhs.value); }
ModNumber operator*(int lhs, const ModNumber& rhs) { return ModNumber((long long)lhs * rhs.value); }

bool ModNumber::operator==(const ModNumber& rhs) const { return value == rhs.value; }
bool ModNumber::operator!=(const ModNumber& rhs) const { return value != rhs.value; }
bool ModNumber::operator<(const ModNumber& rhs) const { return value < rhs.value; }
bool ModNumber::operator<=(const ModNumber& rhs) const { return value <= rhs.value; }
bool ModNumber::operator>(const ModNumber& rhs) const { return value > rhs.value; }
bool ModNumber::operator>=(const ModNumber& rhs) const { return value >= rhs.value; }

ModNumber::operator int() const { return value; }
ModNumber::operator bool() const { return value != 0; }
ModNumber::operator std::string() const { return std::to_string(value); }

std::ostream& operator<<(std::ostream& os, const ModNumber& n) { return os << n.value; }
std::istream& operator>>(std::istream& is, ModNumber& n) {
    int v; is >> v;
    n.value = ModNumber::normalize(v);
    return is;
}

ModNumber& ModNumber::operator=(const ModNumber& rhs) { value = rhs.value; return *this; }
ModNumber& ModNumber::operator=(int rhs) { value = normalize(rhs); return *this; }
ModNumber& ModNumber::operator+=(const ModNumber& rhs) { value = normalize(value + rhs.value); return *this; }
ModNumber& ModNumber::operator+=(int rhs) { value = normalize(value + rhs); return *this; }
ModNumber& ModNumber::operator-=(const ModNumber& rhs) { value = normalize(value - rhs.value); return *this; }
ModNumber& ModNumber::operator-=(int rhs) { value = normalize(value - rhs); return *this; }
ModNumber& ModNumber::operator*=(const ModNumber& rhs) { value = normalize((long long)value * rhs.value); return *this; }
ModNumber& ModNumber::operator*=(int rhs) { value = normalize((long long)value * rhs); return *this; }