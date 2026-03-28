/*
-------------------------------------------------------
File Name: calcVolts.h

Description:
Header file containing the prototype for the calcVolts
function. This function computes voltage values based
on current and resistance arrays using pointers.

Input Parameters:
- double* current      → pointer to current array
- double* resistance   → pointer to resistance array
- double* voltage      → pointer to voltage array
- int size             → number of elements

Output:
- None (modifies voltage array in-place)

Author: Keven Gonzalez
Course: CIS2485 - C++ for Engineers and Scientists
Version: 1.0
Date: 2026-03-28
-------------------------------------------------------
*/

#ifndef CALCVOLTS_H
#define CALCVOLTS_H

void calcVolts(double* current, double* resistance, double* voltage, int size);

#endif