#include "Cercle.h"
#include <iostream>
#include <cmath>

Cercle::Cercle(std::pair<double, double> centre, double rayon) {
}

double Cercle::GetAire() {
    return M_PI * rayon * rayon;
}


double Cercle::GetPerimetre() {
    return 2 * M_PI * rayon;
}

void Cercle::Afficher(){
    std::cout << "Cercle: Centre=(" << centre.first << ", "
              << centre.second << "), Rayon=" << rayon << std::endl;
}