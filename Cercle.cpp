#include "Cercle.h"
#include <iostream>
#include <cmath>

Cercle::Cercle(std::pair<double, double> centre, double rayon) 
    : centre(centre), rayon(rayon) {}

double Cercle::getAire() const {
    return M_PI * rayon * rayon;
}

double Cercle::getPerimetre() const {
    return 2 * M_PI * rayon;
}

void Cercle::afficher() const {
    std::cout << "Cercle: Centre=(" << centre.first << ", " 
              << centre.second << "), Rayon=" << rayon << std::endl;
}