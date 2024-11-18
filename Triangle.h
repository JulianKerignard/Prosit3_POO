#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygone.h"
#include <vector>
#include <utility>

class Triangle : public Polygone {
private:
    std::vector<std::pair<double, double>> sommets;
public:
    explicit Triangle(const std::vector<std::pair<double, double>>& sommets);
    double getAire() const override;
    double getPerimetre() const override;
    void afficher() const override;
};

#endif