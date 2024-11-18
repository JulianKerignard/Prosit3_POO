#include <iostream>

#include "Cercle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
    Cercle cercle({5, 6}, 5);
    cercle.afficher();
    std::cout << "Aire: " << cercle.getAire() << std::endl;
    std::cout << "Perimetre: " << cercle.getPerimetre() << std::endl << std::endl;

    Rectangle rectangle({0, 1}, {1, 0}, 3, 4);
    rectangle.afficher();
    std::cout << "Aire: " << rectangle.getAire() << std::endl;
    std::cout << "Perimetre: " << rectangle.getPerimetre() << std::endl << std::endl;

    Triangle triangle({{0, 0}, {4, 0}, {0, 3}});
    triangle.afficher();
    std::cout << "Aire: " << triangle.getAire() << std::endl;
    std::cout << "Perimetre: " << triangle.getPerimetre() << std::endl << std::endl;

    return 0;
}