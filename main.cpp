#include <iostream>
#include <cmath>
#include <vector>
#include <stdexcept>

// Classe Polygone
class Polygone {
public:
    virtual double getAire() const = 0;
    virtual double getPerimetre() const = 0;
    virtual void afficher() const = 0;
    virtual ~Polygone() = default;
};

// Classe Cercle
class Cercle : public Polygone {
private:
    std::pair<double, double> centre;
    double rayon;
public:
    Cercle(std::pair<double, double> centre, double rayon) : centre(centre), rayon(rayon) {}

    double getAire() const override {
        return M_PI * rayon * rayon;
    }

    double getPerimetre() const override {
        return 2 * M_PI * rayon;
    }

    void afficher() const override {
        std::cout << "Cercle: Centre=(" << centre.first << ", " << centre.second << "), Rayon=" << rayon << std::endl;
    }
};

// Classe Rectangle
class Rectangle : public Polygone {
private:
    std::pair<double, double> sommet1;
   std:: pair<double, double> sommet2; // Vecteur direction
    double largeur, longueur;
public:
    Rectangle(std::pair<double, double> sommet1, std::pair<double, double> sommet2, double largeur, double longueur)
        : sommet1(sommet1), sommet2(sommet2), largeur(largeur), longueur(longueur) {}

    double getAire() const override {
        return largeur * longueur;
    }

    double getPerimetre() const override {
        return 2 * (largeur + longueur);
    }

    void afficher() const override {
        std::cout << "Rectangle: Sommets=(" << sommet1.first << ", " << sommet1.second
             << "), (" << sommet2.first << ", " << sommet2.second
             << "), Dimensions=(" << largeur << ", " << longueur << ")" << std::endl;
    }
};

// Classe Triangle
class Triangle : public Polygone {
private:
    std::vector<std::pair<double, double>> sommets; // Trois sommets
public:
    Triangle(const std::vector<std::pair<double, double>>& sommets) {
        if (sommets.size() != 3) {
            throw std::invalid_argument("Un triangle doit avoir exactement trois sommets.");
        }
        this->sommets = sommets;
    }

    double getAire() const override {
        // Formule de l'aire basée sur les coordonnées des sommets
        double x1 = sommets[0].first, y1 = sommets[0].second;
        double x2 = sommets[1].first, y2 = sommets[1].second;
        double x3 = sommets[2].first, y3 = sommets[2].second;
        return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
    }

    double getPerimetre() const override {
        // Somme des distances entre chaque pair de sommets
        auto distance = [](std::pair<double, double> p1, std::pair<double, double> p2) {
            return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
        };
        return distance(sommets[0], sommets[1]) + distance(sommets[1], sommets[2]) + distance(sommets[2], sommets[0]);
    }

    void afficher() const override {
        std::cout << "Triangle: Sommets=("
             << "(" << sommets[0].first << ", " << sommets[0].second << "), "
             << "(" << sommets[1].first << ", " << sommets[1].second << "), "
             << "(" << sommets[2].first << ", " << sommets[2].second << ")" << ")" << std::endl;
    }
};

// Fonction principale
int main() {
    Cercle cercle({0, 0}, 5);
    cercle.afficher();
    std::cout << "Aire: " << cercle.getAire() << std::endl;
    std::cout << "Périmetre: " << cercle.getPerimetre() << std::endl << std::endl;

    Rectangle rectangle({0, 0}, {1, 0}, 3, 4);
    rectangle.afficher();
    std::cout << "Aire: " << rectangle.getAire() << std::endl;
    std::cout << "Périmetre: " << rectangle.getPerimetre() << std::endl << std::endl;

    Triangle triangle({{0, 0}, {4, 0}, {0, 3}});
    triangle.afficher();
    std::cout << "Aire: " << triangle.getAire() << std::endl;
    std::cout << "Périmetre: " << triangle.getPerimetre() << std::endl << std::endl;

    return 0;
}
