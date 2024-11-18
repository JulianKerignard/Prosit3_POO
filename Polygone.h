// Polygone.hpp
#ifndef POLYGONE_H
#define POLYGONE_H

class Polygone {
public:
    virtual double getAire() const = 0;
    virtual double getPerimetre() const = 0;
    virtual void afficher() const = 0;

    virtual ~Polygone() = default;
};

#endif