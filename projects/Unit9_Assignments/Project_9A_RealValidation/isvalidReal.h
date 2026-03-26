/*
* Name: isvalidReal Function Prototype Header
*
* Description:
* This header file contains the function prototype for
* isvalidReal(), which is used to validate whether a given
* string represents a valid double precision (real) number.
*
* The function enforces the following validation rules:
*     - Optional '+' or '-' sign at the beginning
*     - At most one decimal point
*     - At least one numeric digit (0–9)
*     - No invalid characters allowed
*
* This file allows the function to be shared across multiple
* source files while maintaining proper program structure.
*
* Input Params:
*     str     - string input to be validated (defined in implementation)
*
* Output:
*     Returns true if valid real number
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