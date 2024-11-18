// Triangle.cpp
#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

Triangle::Triangle(const std::vector<std::pair<double, double>>& sommets) {
    if (sommets.size() != 3) {
        throw std::invalid_argument("Un triangle doit avoir exactement trois sommets.");
    }
    this->sommets = sommets;
}

double Triangle::getAire() const {
    double x1 = sommets[0].first, y1 = sommets[0].second;
    double x2 = sommets[1].first, y2 = sommets[1].second;
    double x3 = sommets[2].first, y3 = sommets[2].second;
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
}

double Triangle::getPerimetre() const {
    auto distance = [](std::pair<double, double> p1, std::pair<double, double> p2) {
        return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
    };
    return distance(sommets[0], sommets[1]) +
           distance(sommets[1], sommets[2]) +
           distance(sommets[2], sommets[0]);
}

void Triangle::afficher() const {
    std::cout << "Triangle: Sommets=("
              << "(" << sommets[0].first << ", " << sommets[0].second << "), "
              << "(" << sommets[1].first << ", " << sommets[1].second << "), "
              << "(" << sommets[2].first << ", " << sommets[2].second << ")"
              << ")" << std::endl;
}