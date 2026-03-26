/*
* Name: Real Number Validation Program (Main Driver)
*
* Description:
* This program serves as the main driver for validating
* whether a user-entered string represents a valid double
* precision (real) number.
*
* The program performs the following operations:
*     - Prompts the user to enter a value
*     - Reads the input as a string (including spaces)
*     - Calls the isvalidReal() function to validate input
*     - Displays whether the input is a valid real number
*
* This program demonstrates:
*     - Function calls across multiple files
*     - User input handling using getline()
*     - Output formatting using cout
*     - Data validation through modular design
*
* Input Params:
*     input   - string entered by the user
*
* Output:
*     Displays "Valid real number" if input is valid
*     Displays "Invalid real number" otherwise
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

#include <iostream>
#include <string>
#include "isvalidReal.h"

using namespace std;

int main()
{
    string input;

    cout << "Enter a number: ";
    getline(cin, input);

    if (isvalidReal(input))
    {
        cout << "Valid real number" << endl;
    }
    else
    {
        cout << "Invalid real number" << endl;
    }

    return 0;
}