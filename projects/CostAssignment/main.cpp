/*
 Name: main.cpp
 Author: Keven Gonzalez
 Date: May 16, 2026
 Course: CIS2485 - C++ for Engineers and Scientists

 Description:
 This is the main program for the assignment.
 The program opens the input file, reads each record, stores the
 records in a vector, calculates the total amount, and displays
 the final result.

 Inputs:
 Data read from the file costfile.txt.

 Outputs:
 Displays the total amount of all records in the file.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include "cost.h"

using namespace std;

// Function prototypes
Cost parse_account(string line);
double sum_accounts(const vector<Cost>& accounts);

int main()
{
    vector<Cost> accounts;
    ifstream inputFile;
    string line;
    Cost account;
    double total;

    // Open the input file
    inputFile.open("costfile.txt");

    // Check if the file opened successfully
    if (!inputFile)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Read each line from the file
    while (getline(inputFile, line))
    {
        // Convert the line into a Cost structure
        account = parse_account(line);

        // Add the structure to the vector
        accounts.push_back(account);
    }

    // Close the file
    inputFile.close();

    // Calculate the total amount
    total = sum_accounts(accounts);

    // Display the result
    cout << fixed << setprecision(2);
    cout << "The total amount is: $" << total << endl;

    return 0;
}