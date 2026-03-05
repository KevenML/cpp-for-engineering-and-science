/*
* Name: GravitationalForceModel
*
* Description: This application calculates the weight (force) of two
* objects using the gravitational force equation in the English system.
* The program converts mass (lbm) into weight (lbf) using the equation:
*
*        Weight = (mass * gravity) / gc
*
* where gravity = 32.2 ft/s^2 and gc = 32.2 lbm·ft/(lbf·s^2).
*
* Input Params:
* mass1 - mass of first object (lbm)
* mass2 - mass of second object (lbm)
*
* Output:
* weight1 - weight of first object (lbf)
* weight2 - weight of second object (lbf)
*
* Author: Keven Gonzalez
*
* Version: 1.0
*
* Date: 03/05/2026
*
* Course: CIS2485
*
*/

#include <iostream>
using namespace std;

int main()
{
    const double gravity = 32.2;   // ft/s^2
    const double gc = 32.2;        // conversion constant

    double mass1 = 5.0;
    double mass2 = 4.2;

    double weight1 = (mass1 * gravity) / gc;
    double weight2 = (mass2 * gravity) / gc;

    cout << "Weight for 5 lbm: " << weight1 << " lbf" << endl;
    cout << "Weight for 4.2 lbm: " << weight2 << " lbf" << endl;

    return 0;
}