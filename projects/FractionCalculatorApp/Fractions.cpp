/*
 * Name: Fractions Implementation
 *
 * Description:
 *      Implements all member functions of the Fractions class,
 *      including validation, simplification, and arithmetic operations.
 *
 * Author: Keven Gonzalez
 * Version: 1.1
 * Date: 03/28/2026
 * Course: CIS2485
 */

#include "Fractions.h"
#include <iostream>
#include <cstdlib> // for abs()

using namespace std;

// GCD function (Euclidean Algorithm)
int Fractions::gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Simplify fraction
void Fractions::simplify()
{
    int divisor = gcd(abs(num), abs(denom));
    num /= divisor;
    denom /= divisor;
}

// Default constructor
Fractions::Fractions()
{
    num = 1;
    denom = 1;
}

// Parameterized constructor with validation
Fractions::Fractions(int n, int d)
{
    num = n;

    if (d == 0)
    {
        cout << "Error: Denominator cannot be 0. Defaulting to 1.\n";
        denom = 1;
    }
    else
    {
        if (d < 0)
        {
            num = -num;
            denom = -d;
        }
        else
        {
            denom = d;
        }
    }

    simplify();
}

// Display function
void Fractions::display() const
{
    cout << num << "/" << denom;
}

// Addition
Fractions Fractions::operator+(const Fractions& other) const
{
    int newNum = (num * other.denom) + (denom * other.num);
    int newDenom = denom * other.denom;
    return Fractions(newNum, newDenom);
}

// Subtraction
Fractions Fractions::operator-(const Fractions& other) const
{
    int newNum = (num * other.denom) - (denom * other.num);
    int newDenom = denom * other.denom;
    return Fractions(newNum, newDenom);
}

// Multiplication
Fractions Fractions::operator*(const Fractions& other) const
{
    int newNum = num * other.num;
    int newDenom = denom * other.denom;
    return Fractions(newNum, newDenom);
}

// Division
Fractions Fractions::operator/(const Fractions& other) const
{
    if (other.num == 0)
    {
        cout << "Error: Cannot divide by zero fraction. Returning 0/1.\n";
        return Fractions(0, 1);
    }

    int newNum = num * other.denom;
    int newDenom = denom * other.num;
    return Fractions(newNum, newDenom);
}