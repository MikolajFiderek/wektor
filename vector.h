#ifndef VECTOR_H
#define VECTOR_H

class Wektor {
public:
    Wektor(double x_val, double y_val);
    double dlugosc() const;
    double kat() const;
    double getX() const;
    double getY() const;

private:
    double x;
    double y;
};

#endif // VECTOR_H