/*
 * Name: Fractions Class
 *
 * Description:
 *      Defines a Fraction object with numerator and denominator.
 *      Supports arithmetic operations using operator overloading.
 *
 * Author: Keven Gonzalez
 * Version: 1.1
 * Date: 03/28/2026
 * Course: CIS2485
 */

#ifndef FRACTIONS_H
#define FRACTIONS_H

#include <iostream>
using namespace std;

class Fractions
{
private:
    int num;
    int denom;

    // Helper functions
    int gcd(int a, int b);
    void simplify();

public:
    // Constructors
    Fractions();                  // Default constructor
    Fractions(int n, int d);      // Parameterized constructor

    // Display
    void display() const;

    // Operator Overloading
    Fractions operator+(const Fractions& other) const;
    Fractions operator-(const Fractions& other) const;
    Fractions operator*(const Fractions& other) const;
    Fractions operator/(const Fractions& other) const;
};

#endif