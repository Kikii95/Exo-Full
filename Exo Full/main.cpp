#include <iostream>
#include "Integer.h"

int main() {
    Integer a(5);
    Integer b(3);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    Integer c = a + b;
    std::cout << "a + b: " << c << std::endl;

    c = a - b;
    std::cout << "a - b: " << c << std::endl;

    c = a * b;
    std::cout << "a * b: " << c << std::endl;

    Integer d = a.pow(3);
    std::cout << "a^3: " << d << std::endl;

    return 0;
}
