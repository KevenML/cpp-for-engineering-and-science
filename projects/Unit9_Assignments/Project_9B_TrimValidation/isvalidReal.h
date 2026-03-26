/*
* Name: isvalidReal Function Prototype Header
*
* Description:
* This header file defines the function prototype for
* isvalidReal(), which is used to determine whether a given
* string represents a valid double precision (real) number.
*
* The validation rules include:
*     - Optional '+' or '-' sign at the beginning
*     - At most one decimal point
*     - At least one numeric digit (0–9)
*     - No invalid characters allowed
*
* This file supports modular programming by allowing the
* function to be declared separately from its implementation.
*
* Input Params:
*     str     - string input to be validated (defined in .cpp file)
*
* Output:
*     Returns true if the string is a valid real number
*     Returns false otherwise
*
* Author: Keven Gonzalez
*
* Version: 1.0
*
* Date: 03/26/2026
*
* Course: CIS2451 C++ Language Programming
*
*/

#ifndef ISVALIDREAL_H
#define ISVALIDREAL_H

#include <string>
using namespace std;

// Function prototype
bool isvalidReal(string str);

#endif