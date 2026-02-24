
#pragma once
#include <iostream>
#include <string>

class ModNumber {
public:
    static const int M = 512;

    ModNumber();
    ModNumber(int v);
    ModNumber(const ModNumber& other);

    ModNumber operator+(const ModNumber& rhs) const;
    ModNumber operator-(const ModNumber& rhs) const;
    ModNumber operator*(const ModNumber& rhs) const;

    ModNumber operator+(int rhs) const;
    ModNumber operator-(int rhs) const;
    ModNumber operator*(int rhs) const;

    friend ModNumber operator+(int lhs, const ModNumber& rhs);
    friend ModNumber operator-(int lhs, const ModNumber& rhs);
    friend ModNumber operator*(int lhs, const ModNumber& rhs);

    bool operator==(const ModNumber& rhs) const;
    bool operator!=(const ModNumber& rhs) const;
    bool operator<(const ModNumber& rhs) const;
    bool operator<=(const ModNumber& rhs) const;
    bool operator>(const ModNumber& rhs) const;
    bool operator>=(const ModNumber& rhs) const;

    explicit operator int() const;
    explicit operator bool() const;
    explicit operator std::string() const;

    friend std::ostream& operator<<(std::ostream& os, const ModNumber& n);
    friend std::istream& operator>>(std::istream& is, ModNumber& n);

    ModNumber& operator=(const ModNumber& rhs);
    ModNumber& operator=(int rhs);
    ModNumber& operator+=(const ModNumber& rhs);
    ModNumber& operator+=(int rhs);
    ModNumber& operator-=(const ModNumber& rhs);
    ModNumber& operator-=(int rhs);
    ModNumber& operator*=(const ModNumber& rhs);
    ModNumber& operator*=(int rhs);

private:
    int value;
    static int normalize(long long v);
};