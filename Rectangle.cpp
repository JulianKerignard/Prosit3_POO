// Rectangle.cpp
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(std::pair<double, double> sommet1,
                    std::pair<double, double> sommet2,
                    double largeur, double longueur)
    : sommet1(sommet1), sommet2(sommet2),
      largeur(largeur), longueur(longueur) {}

double Rectangle::getAire() const {
    return largeur * longueur;
}

double Rectangle::getPerimetre() const {
    return 2 * (largeur + longueur);
}

void Rectangle::afficher() const {
    std::cout << "Rectangle: Sommets=(" << sommet1.first << ", "
              << sommet1.second << "), (" << sommet2.first << ", "
              << sommet2.second << "), Dimensions=(" << largeur
              << ", " << longueur << ")" << std::endl;
}

