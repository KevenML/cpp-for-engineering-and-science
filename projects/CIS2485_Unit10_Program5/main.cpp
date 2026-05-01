/*------------------------------------------
File Name: main.cpp

Description:
This program calculates voltage using given
current and resistance values. It uses a function
with pointers to do the calculation and then
prints everything in a table.

Formula used:
V = I * R

Author: Keven Gonzalez
Course: CIS2485 
Date: May 1, 2026
---------------------------------------*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>   // for tolower()
#include <cmath>    // for isnan()

using namespace std;

// number of elements in arrays
const int SIZE = 10;

// function declarations
void calcVolts(double* current, double* resistance, double* voltage, int size);
bool isValidValue(double value);
bool validateYesNo(const string& input);

// this function calculates voltage using pointers
void calcVolts(double* current, double* resistance, double* voltage, int size)
{
    // make sure pointers aren't null
    if (!current || !resistance || !voltage) return;

    for (int i = 0; i < size; i++)
    {
        // pointer math instead of current[i]
        *(voltage + i) = (*(current + i)) * (*(resistance + i));
    }
}

// checks if the number is valid (not negative or NaN)
bool isValidValue(double value)
{
    return !std::isnan(value) && value >= 0;
}

// checks if user typed y or n
bool validateYesNo(const string& input)
{
    if (input.length() != 1) return false;

    char c = tolower(input[0]);
    return (c == 'y' || c == 'n');
}

int main()
{
    string choice;

    do
    {
        // given values from textbook
        double current[SIZE] = {
            10.62, 14.89, 13.21, 16.55, 18.62,
            9.47, 6.58, 18.32, 12.15, 3.98
        };

        double resistance[SIZE] = {
            4, 8.5, 6, 7.35, 9,
            15.3, 3, 5.4, 2.9, 4.8
        };

        double voltage[SIZE];

        // calculate
        calcVolts(current, resistance, voltage, SIZE);

        // display
        cout << fixed << setprecision(2);
        cout << "Index\tCurrent\tResistance\tVoltage\n";
        cout << "--------------------------------------------------\n";

        for (int i = 0; i < SIZE; i++)
        {
            if (!isValidValue(current[i]) || !isValidValue(resistance[i]))
            {
                cout << "Invalid data at index " << i << endl;
                continue;
            }

            cout << i << "\t"
                 << current[i] << "\t"
                 << resistance[i] << "\t\t"
                 << voltage[i] << endl;
        }

        // ask user
        cout << "\nRun again? (y/n): ";
        cin >> choice;

        // validate input
        while (!validateYesNo(choice))
        {
            cout << "Invalid input. Enter y or n: ";
            cin >> choice;
        }

    } while (tolower(choice[0]) == 'y');

    cout << "Program ended.\n";

    return 0;
}