#include "Polygone.h"
#include <iostream>
#include <cmath>

// constrc tkt ca doit marcher
Polygone::Polygone(std::vector<std::pair<double, double>>& points) {
    if (points.size() < 3) { //verif si c au moins un triangle tu connais
        throw std::invalid_argument("Un polygone doit avoir au moins trois sommets.");
    }
    sommets = points;
}

// Calcul du périmètre
double Polygone::GetPerimetre(){
    double perimetre = 0.0;
    for (size_t i = 0; i < sommets.size(); ++i) {
        auto p1 = sommets[i];
        auto p2 = sommets[(i + 1) % sommets.size()]; // Boucle pour fermer le polygone
        perimetre += sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
    }
    return perimetre;
}

// Calcul de l'aire
double Polygone::GetAire(){
    double aire = 0.0;
    for (size_t i = 0; i < sommets.size(); ++i) {
        auto p1 = sommets[i];
        auto p2 = sommets[(i + 1) % sommets.size()]; // Boucle pour fermer le polygone
        aire += (p1.first * p2.second - p1.second * p2.first);
    }
    return std::abs(aire) / 2.0;
}

// Affiche les sommets
void Polygone::Afficher(){
    std::cout << "Polygone avec " << sommets.size() << " sommets:" << std::endl;
    for (const auto& point : sommets) {
        std::cout << "(" << point.first << ", " << point.second << ")" << std::endl;
    }
}
