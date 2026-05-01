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
 *      Displays results of all operations using formatted output
 *
 * Author: Keven Gonzalez
 * Version: 2.0 
 * Date: may 1, 2026
 * Course: CIS2485
 */

#include <iostream>
#include <iomanip>
#include "Fractions.h"

using namespace std;

int main()
{
    int n1, d1, n2, d2;

    cout << "=== Fraction Calculator ===\n\n";

    // -------- INPUT FRACTION 1 --------
    cout << "Enter first fraction (num denom): ";
    cin >> n1 >> d1;

    while (d1 == 0)
    {
        cout << "Denominator cannot be 0. Re-enter denominator: ";
        cin >> d1;
    }

    // -------- INPUT FRACTION 2 --------
    cout << "\nEnter second fraction (num denom): ";
    cin >> n2 >> d2;

    while (d2 == 0)
    {
        cout << "Denominator cannot be 0. Re-enter denominator: ";
        cin >> d2;
    }

    // Create objects
    Fractions f1(n1, d1);
    Fractions f2(n2, d2);

    // Perform operations
    Fractions sum  = f1 + f2;
    Fractions diff = f1 - f2;
    Fractions prod = f1 * f2;
    Fractions quot = f1 / f2;

    // -------- OUTPUT --------
    cout << "\n==============================\n";
    cout << "           Results\n";
    cout << "==============================\n\n";

    cout << left << setw(18) << "Addition:";
    f1.display(); cout << " + "; f2.display(); cout << " = ";
    sum.display(); cout << endl;

    cout << left << setw(18) << "Subtraction:";
    f1.display(); cout << " - "; f2.display(); cout << " = ";
    diff.display(); cout << endl;

    cout << left << setw(18) << "Multiplication:";
    f1.display(); cout << " * "; f2.display(); cout << " = ";
    prod.display(); cout << endl;

    cout << left << setw(18) << "Division:";
    f1.display(); cout << " / "; f2.display(); cout << " = ";
    quot.display(); cout << endl;

    cout << "\nProgram complete.\n";

    return 0;
}