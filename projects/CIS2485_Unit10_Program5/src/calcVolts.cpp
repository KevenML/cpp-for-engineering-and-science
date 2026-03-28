/*
-------------------------------------------------------
File Name: calcVolts.cpp

Description:
Implements the calcVolts function. This function uses
pointer arithmetic to calculate voltage values based on
Ohm’s Law:

    voltage[i] = current[i] * resistance[i]

Input Parameters:
- double* current
- double* resistance
- double* voltage
- int size

Output:
- Populates the voltage array

Author: Keven Gonzalez
Course: CIS2485 - C++ for Engineers and Scientists
Version: 1.0
Date: 2026-03-28
-------------------------------------------------------
*/

#include "../include/calcVolts.h"

void calcVolts(double* current, double* resistance, double* voltage, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(voltage + i) = (*(current + i)) * (*(resistance + i));
    }
}