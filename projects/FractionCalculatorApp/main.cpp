/*
 * Name: FractionCalculatorApp
 *
 * Description:
 *      Tests the Fractions class by performing addition,
 *      subtraction, multiplication, and division.
 *
 * Input:
 *      User enters two fractions (numerator and denominator)
 *
 * Output:
 *      Displays results of all operations
 *
 * Author: Keven Gonzalez
 * Version: 1.1
 * Date: 03/28/2026
 * Course: CIS2485
 */

#include <iostream>
#include "Fractions.h"

using namespace std;

int main()
{
    int n1, d1, n2, d2;

    cout << "Enter first fraction (num denom): ";
    cin >> n1 >> d1;

    cout << "Enter second fraction (num denom): ";
    cin >> n2 >> d2;

    Fractions f1(n1, d1);
    Fractions f2(n2, d2);

    Fractions sum = f1 + f2;
    Fractions diff = f1 - f2;
    Fractions prod = f1 * f2;
    Fractions quot = f1 / f2;

    cout << "\nResults:\n";

    cout << "Addition: ";
    f1.display(); cout << " + "; f2.display(); cout << " = ";
    sum.display(); cout << endl;

    cout << "Subtraction: ";
    f1.display(); cout << " - "; f2.display(); cout << " = ";
    diff.display(); cout << endl;

    cout << "Multiplication: ";
    f1.display(); cout << " * "; f2.display(); cout << " = ";
    prod.display(); cout << endl;

    cout << "Division: ";
    f1.display(); cout << " / "; f2.display(); cout << " = ";
    quot.display(); cout << endl;

    return 0;
}