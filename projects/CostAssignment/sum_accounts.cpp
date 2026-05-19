/*
 Name: sum_accounts.cpp
 Author: Keven Gonzalez
 Date: May 16, 2026
 Course: CIS2485 - C++ for Engineers and Scientists

 Description:
 This file contains the sum_accounts function.
 The function loops through a vector of Cost structures and adds
 together all of the amount values.

 Inputs:
 A vector of Cost structures.

 Outputs:
 Returns a double containing the total sum of all amounts.
*/

#include <vector>
#include "cost.h"
using namespace std;

// Function prototype
double sum_accounts(const vector<Cost>& accounts);

// Function definition
double sum_accounts(const vector<Cost>& accounts)
{
    double total = 0.0;

    // Add all amounts in the vector
    for (int i = 0; i < accounts.size(); i++)
    {
        total = total + accounts[i].amount;
    }

    return total;
}