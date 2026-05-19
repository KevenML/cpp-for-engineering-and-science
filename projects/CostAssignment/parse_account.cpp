/*
 Name: parse_account.cpp
 Author: Keven Gonzalez
 Date: May 16, 2026
 Course: CIS2485 - C++ for Engineers and Scientists

 Description:
 This file contains the parse_account function.
 The function reads one line from the input file and converts it
 into a Cost structure.

 Inputs:
 A string containing one record from the file in the format:
 Description Amount ItemNumber

 Outputs:
 Returns a Cost structure containing the parsed data.
*/

#include <sstream>
#include <string>
#include "cost.h"
using namespace std;

// Function prototype
Cost parse_account(string line);

// Function definition
Cost parse_account(string line)
{
    Cost account;
    stringstream input(line);

    // Read the values from the line
    input >> account.description;
    input >> account.amount;
    input >> account.itemNumber;

    return account;
}