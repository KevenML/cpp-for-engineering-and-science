/*
 * Name: Fractions Class
 *
 * Description:
 *      Defines a Fraction object with numerator and denominator.
 *      Supports arithmetic operations using operator overloading.
 *
 * Author: Keven Gonzalez
 * Version: 1.1
 * Date: may 1, 2026
 * Course: CIS2485
 */

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