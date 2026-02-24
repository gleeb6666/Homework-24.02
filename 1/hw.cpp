#include <iostream>
#include <string>
#include "ModNumber.h"

int main() {
    ModNumber a, b;
    int k;

    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;
    std::cout << "k = "; std::cin >> k;

    std::cout << "\na + b = " << (a + b) << "\n";
    std::cout << "a - b = " << (a - b) << "\n";
    std::cout << "a * b = " << (a * b) << "\n";

    std::cout << "\na + k = " << (a + k) << "\n";
    std::cout << "a - k = " << (a - k) << "\n";
    std::cout << "a * k = " << (a * k) << "\n";
    std::cout << "k + b = " << (k + b) << "\n";
    std::cout << "k - b = " << (k - b) << "\n";
    std::cout << "k * b = " << (k * b) << "\n";

    std::cout << "\na == b : " << (a == b) << "\n";
    std::cout << "a != b : " << (a != b) << "\n";
    std::cout << "a <  b : " << (a < b) << "\n";
    std::cout << "a <= b : " << (a <= b) << "\n";
    std::cout << "a >  b : " << (a > b) << "\n";
    std::cout << "a >= b : " << (a >= b) << "\n";

    std::cout << "\nint(a)    = " << static_cast<int>(a) << "\n";
    std::cout << "bool(a)   = " << static_cast<bool>(a) << "\n";
    std::cout << "string(a) = " << static_cast<std::string>(a) << "\n";

    ModNumber c = a;
    std::cout << "\nc = a    => " << c << "\n";
    c += b;  std::cout << "c += b   => " << c << "\n";
    c -= b;  std::cout << "c -= b   => " << c << "\n";
    c *= b;  std::cout << "c *= b   => " << c << "\n";
    c = k;   std::cout << "c = k    => " << c << "\n";
    c += k;  std::cout << "c += k   => " << c << "\n";

    return 0;
}