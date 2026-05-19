/*------------------------------------------
File Name: calcVolts.cpp

Description:
This file contains the calcVolts function,
which calculates voltage using the formula:

V = I * R

Author: Keven Gonzalez
Course: CIS2485
Date: May 1, 2026
------------------------------------------*/

#include "calcVolts.h"

void calcVolts(double* current, double* resistance, double* voltage, int size)
{
    // Make sure pointers are valid
    if (!current || !resistance || !voltage)
        return;

    // Calculate voltage using pointer arithmetic
    for (int i = 0; i < size; i++)
    {
        *(voltage + i) = (*(current + i)) * (*(resistance + i));
    }
}