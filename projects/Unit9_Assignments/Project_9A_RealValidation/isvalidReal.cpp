/*
* Name: isvalidReal Function Implementation
*
* Description:
* This function validates whether a given string represents
* a valid double precision (real) number. The validation
* follows these rules:
*
*     - Allows an optional '+' or '-' sign at the beginning
*     - Allows at most one decimal point
*     - Allows the decimal point to appear at the beginning
*     - Requires at least one digit (0–9)
*     - Rejects any invalid characters
*
* The function uses pointer-based traversal to examine each
* character in the string for validation, ensuring compliance
* with assignment requirements.
*
* Input Params:
*     str     - input string to be validated as a real number
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

#include "isvalidReal.h"
#include <cctype>   // for isdigit()

bool isvalidReal(string str)
{
    const char* ptr = str.c_str();

    // Empty string check
    if (*ptr == '\0')
        return false;

    // Optional + or - sign
    if (*ptr == '+' || *ptr == '-')
        ptr++;

    bool hasDigit = false;
    bool hasDecimal = false;

    while (*ptr != '\0')
    {
        if (isdigit(*ptr))
        {
            hasDigit = true;
        }
        else if (*ptr == '.')
        {
            if (hasDecimal)  // already had a decimal
                return false;

            hasDecimal = true;
        }
        else
        {
            // invalid character
            return false;
        }

        ptr++; // move pointer
    }

    // Must have at least one digit
    return hasDigit;
}