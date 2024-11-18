#ifndef CERCLE_H
#define CERCLE_H

#include "Polygone.h"
#include <utility>

class Cercle{
private:
    std::pair<double, double> centre;
    double rayon;
public:
    Cercle(std::pair<double, double> centre, double rayon);
    double GetAire();
    double GetPerimetre();
    void Afficher();
};
#endif