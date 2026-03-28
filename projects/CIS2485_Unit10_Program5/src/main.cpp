/*
-------------------------------------------------------
File Name: main.cpp

Description:
Main driver program for calculating voltage values
using predefined current and resistance arrays.
Calls calcVolts() using pointers and displays results.

Features:
- Uses symbolic constants
- Uses pointer-based function
- Displays formatted output

Input:
- None (predefined arrays)

Output:
- Table of current, resistance, and voltage

Author: Keven Gonzalez
Course: CIS2485 - C++ for Engineers and Scientists
Version: 1.0
Date: 2026-03-28
-------------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include "../include/calcVolts.h"

using namespace std;

// Symbolic constant
const int SIZE = 10;

int main()
{
    // Declare and initialize arrays
    double current[SIZE] = {
        10.62, 14.89, 13.21, 16.55, 18.62,
        9.47, 6.58, 18.32, 12.15, 3.98
    };

    double resistance[SIZE] = {
        4, 8.5, 6, 7.35, 9,
        15.3, 3, 5.4, 2.9, 4.8
    };

    double voltage[SIZE];

    // Call function
    calcVolts(current, resistance, voltage, SIZE);

    // Output results
    cout << fixed << setprecision(2);

    cout << "Index\tCurrent\tResistance\tVoltage\n";
    cout << "--------------------------------------------------\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << "\t"
             << current[i] << "\t"
             << resistance[i] << "\t\t"
             << voltage[i] << endl;
    }

    return 0;
}