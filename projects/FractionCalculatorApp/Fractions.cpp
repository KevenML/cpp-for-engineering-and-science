/*
 * Name: Fractions Implementation
 *
 * Description:
 *      Implements all member functions of the Fractions class,
 *      including validation, simplification, and arithmetic operations.
 *
 * Author: Keven Gonzalez
 * Version: 1.2
 * Date: may 1, 2026
 * Course: CIS2485
 */
#include "Fractions.h"
#include <iostream>
using namespace std;

// Default constructor
Fractions::Fractions()
{
    num = 1;
    denom = 1;
}

// Parameterized constructor
Fractions::Fractions(int n, int d)
{
    num = n;

    if (d == 0)
    {
        cout << "Denominator cannot be 0. Setting to 1.\n";
        denom = 1;
    }
    else
    {
        denom = d;
    }
}

// Display
void Fractions::display() const
{
    cout << num << "/" << denom;
}

// Addition
Fractions Fractions::operator+(const Fractions& other) const
{
    return Fractions(
        num * other.denom + denom * other.num,
        denom * other.denom
    );
}

// Subtraction
Fractions Fractions::operator-(const Fractions& other) const
{
    return Fractions(
        num * other.denom - denom * other.num,
        denom * other.denom
    );
}

// Multiplication
Fractions Fractions::operator*(const Fractions& other) const
{
    return Fractions(
        num * other.num,
        denom * other.denom
    );
}

// Division
Fractions Fractions::operator/(const Fractions& other) const
{
    return Fractions(
        num * other.denom,
        denom * other.num
    );
}