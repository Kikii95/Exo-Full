#include "Vector2.h"

// Constructeur par défaut
Vector2::Vector2() : x(0), y(0) {}

// Constructeur avec paramètres
Vector2::Vector2(float x, float y) : x(x), y(y) {}

// Getter pour x
float Vector2::getX() const {
    return x;
}

// Setter pour x
void Vector2::setX(float x) {
    this->x = x;
}

// Getter pour y
float Vector2::getY() const {
    return y;
}

// Setter pour y
void Vector2::setY(float y) {
    this->y = y;
}
