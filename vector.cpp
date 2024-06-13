#include <cmath>
#include "vector.h"

Wektor::Wektor(double x_val, double y_val) : x(x_val), y(y_val) {}

double Wektor::dlugosc() const {
    return std::sqrt(x * x + y * y);
}

double Wektor::kat() const {
    return std::atan2(y, x) * (180.0 / M_PI);
}

double Wektor::getX() const {
    return x;
}

double Wektor::getY() const {
    return y;
}
