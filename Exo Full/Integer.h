#ifndef INTEGER_H
#define INTEGER_H

#include <iostream>

class Integer {
private:
    int value;

public:
    Integer();

    Integer(int value);

    Integer operator+(const Integer& other);

    Integer& operator+=(const Integer& other);

    Integer operator-(const Integer& other);

    Integer& operator-=(const Integer& other);

    Integer operator*(const Integer& other);

    Integer& operator*=(const Integer& other);

    Integer pow(int exponent);

    friend std::ostream& operator<<(std::ostream& os, const Integer& obj);
};

#endif
