// Cercle.hpp
#ifndef CERCLE_H
#define CERCLE_H

#include "Polygone.h"
#include <utility>

class Cercle : public Polygone {
private:
    std::pair<double, double> centre;
    double rayon;
public:
    Cercle(std::pair<double, double> centre, double rayon);
    double getAire() const override;
    double getPerimetre() const override;
    void afficher() const override;
};

#endif
