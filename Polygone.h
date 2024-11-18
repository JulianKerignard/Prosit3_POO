#ifndef POLYGONE_H
#define POLYGONE_H

#include <vector>

class Polygone {
private:
    std::vector<std::pair<double, double>> sommets; // Coordonnées des sommets
public:
    Polygone(std::vector<std::pair<double, double>>& points);

    double GetPerimetre();

    double GetAire();

    void Afficher();
};

#endif
