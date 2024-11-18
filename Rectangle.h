// Rectangle.hpp
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygone.h"
#include <utility>

class Rectangle : public Polygone {
private:
    std::pair<double, double> sommet1;
    std::pair<double, double> sommet2;
    double largeur, longueur;
public:
    Rectangle(std::pair<double, double> sommet1,
             std::pair<double, double> sommet2,
             double largeur, double longueur);
    double getAire() const override;
    double getPerimetre() const override;
    void afficher() const override;
};

#endif