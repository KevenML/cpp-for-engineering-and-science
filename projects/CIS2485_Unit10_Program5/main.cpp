/*--------------------------------------------------
File Name: main.cpp

Description:
Program for calculating voltage using current and resistance arrays.
Calls calcVolts() using pointers and displays results.

Input: None 

Output: Table of current, resistance, and voltage

Author: Keven Gonzalez
Course: CIS2485 
Version: 2
Date: may 1 2026
---------------------------------------*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>   // tolower
#include <cmath>    // isnan

using namespace std;

// Symbolic constant
const int SIZE = 10;

// Function prototypes
void calcVolts(double* current, double* resistance, double* voltage, int size);
bool isValidValue(double value);
bool validateYesNo(const string& input);

/*
-------------------------------------------------------
Function: calcVolts
Purpose:  Compute voltage using pointer arithmetic
-------------------------------------------------------
*/
void calcVolts(double* current, double* resistance, double* voltage, int size)
{
    if (!current || !resistance || !voltage) return;

    for (int i = 0; i < size; i++)
    {
        *(voltage + i) = (*(current + i)) * (*(resistance + i));
    }
}

/*
-------------------------------------------------------
Function: isValidValue
Purpose:  Validate numeric values
-------------------------------------------------------
*/
bool isValidValue(double value)
{
    return !isnan(value) && value >= 0;
}

/*
-------------------------------------------------------
Function: validateYesNo
Purpose:  Validate y/n input using char functions
-------------------------------------------------------
*/
bool validateYesNo(const string& input)
{
    if (input.length() != 1) return false;

    char c = tolower(input[0]);
    return (c == 'y' || c == 'n');
}

/*
-------------------------------------------------------
Main Function
-------------------------------------------------------
*/
int main()
{
    double current[SIZE] = {
        10.62, 14.89, 13.21, 16.55, 18.62,
        9.47, 6.58, 18.32, 12.15, 3.98
    };

    double resistance[SIZE] = {
        4, 8.5, 6, 7.35, 9,
        15.3, 3, 5.4, 2.9, 4.8
    };

    double voltage[SIZE];

    calcVolts(current, resistance, voltage, SIZE);

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