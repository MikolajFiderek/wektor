#include <iostream>
#include "vector.h"

using namespace std;

int main() {
    double x, y;

    cout << "Podaj wspolrzedna x: ";
    cin >> x;
    cout << "Podaj wspolrzedna y: ";
    cin >> y;

    Wektor wektor(x, y);

    cout << "Dlugosc wektora: " << wektor.dlugosc() << endl;

    return 0;
}