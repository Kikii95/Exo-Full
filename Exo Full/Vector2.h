#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
private:
    float x;
    float y;

public:
    // Constructeur par défaut
    Vector2();

    // Constructeur avec paramètres
    Vector2(float x, float y);

    // Getter pour x
    float getX() const;

    // Setter pour x
    void setX(float x);

    // Getter pour y
    float getY() const;

    // Setter pour y
    void setY(float y);
};

#endif // VECTOR2_H
