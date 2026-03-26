/*
* Name: Real Number Validation Program (Main Driver)
*
* Description:
* This program prompts the user to enter a value and determines
* whether the input is a valid double precision (real) number.
*
* The program performs the following operations:
*     - Accepts user input as a string using getline()
*     - Passes the input to the isvalidReal() function
*     - Displays whether the input is valid or invalid
*
* This program demonstrates:
*     - User input handling
*     - Function calls across multiple files
*     - Data validation using modular design
*     - Output display using standard I/O
*
* Input Params:
*     input   - string entered by the user
*
* Output:
*     "Valid real number" if input is valid
*     "Invalid real number" otherwise
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
        cout << "Valid real number" << endl;
    else
        cout << "Invalid real number" << endl;

    return 0;
}