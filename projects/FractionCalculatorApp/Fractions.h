#ifndef FRACTIONS_H
#define FRACTIONS_H

class Fractions
{
private:
    int num;
    int denom;

public:
    Fractions();
    Fractions(int n, int d);

    void display() const;

    Fractions operator+(const Fractions& other) const;
    Fractions operator-(const Fractions& other) const;
    Fractions operator*(const Fractions& other) const;
    Fractions operator/(const Fractions& other) const;
};

#endif