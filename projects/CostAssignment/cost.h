/*
 Name: cost.h
 Author: Keven Gonzalez
 Date: May 16, 2026
 Course: CIS2485 - C++ for Engineers and Scientists

 Description:
 This header file contains the Cost structure used in the program.
 Each record stores a description, an amount, and an item number.

 Outputs:
 Defines the Cost structure so it can be used by other source files.
*/

#ifndef COST_H
#define COST_H

#include <string>
using namespace std;

// Structure used to store one record from the file
struct Cost
{
    string description;
    double amount;
    int itemNumber;
};

#endif