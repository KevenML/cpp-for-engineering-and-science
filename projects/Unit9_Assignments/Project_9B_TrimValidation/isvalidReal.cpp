/*
* Name: isvalidReal Function Implementation (Trim + Validation)
*
* Description:
* This function determines whether a given string represents
* a valid double precision (real) number after removing any
* leading and trailing whitespace characters.
*
* The function performs the following operations:
*     - Removes leading spaces using pointer traversal
*     - Removes trailing spaces using pointer boundaries
*     - Checks for an optional '+' or '-' sign at the beginning
*     - Ensures at most one decimal point exists
*     - Confirms the presence of at least one digit (0–9)
*     - Rejects any invalid characters
*
* The implementation uses pointer arithmetic to iterate
* through the string efficiently and meet assignment
* requirements for pointer usage and data validation.
*
* Input Params:
*     str     - string to be validated as a real number
*
* Output:
*     Returns true if the trimmed string is a valid real number
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
#include <cctype>   // isdigit, isspace

bool isvalidReal(string str)
{
    const char* start = str.c_str();

    // 1. REMOVE LEADING SPACES
    while (*start != '\0' && isspace(*start))
        start++;

    // If string was all spaces
    if (*start == '\0')
        return false;

    // 2. FIND END (for trailing trim)
    const char* end = start;
    while (*end != '\0')
        end++;

    end--; // move to last character

    // 3. REMOVE TRAILING SPACES
    while (end > start && isspace(*end))
        end--;

    // Now validate from start → end
    bool hasDigit = false;
    bool hasDecimal = false;

    // Optional sign
    if (*start == '+' || *start == '-')
        start++;

    const char* ptr = start;

    while (ptr <= end)
    {
        if (isdigit(*ptr))
        {
            hasDigit = true;
        }
        else if (*ptr == '.')
        {
            if (hasDecimal)
                return false;

            hasDecimal = true;
        }
        else
        {
            return false; // invalid char
        }

        ptr++;
    }

    return hasDigit;
}