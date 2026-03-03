/*
 * Name: FiniteLoadAnalyzer()
 *
 * Description: This application calculates bending stress (psi)
 *              using the flexure formula:
 *              sigma = (M * c) / I
 *              where M = L * d
 *
 * Input Params:
 *      double L      - Load (lbs)
 *      double d_ft   - Distance from fixed end (feet)
 *      double h      - Beam height (inches)
 *      double I      - Moment of inertia (in^4)
 *
 * Return:
 *      double S      - Bending stress (psi)
 *
 * Author: Keven Gonzalez
 *
 * Version: 1.0
 *
 * Date: 03/03/2026
 *
 * Course: CIS2485
 *
 */

#include <iostream>
using namespace std;

int main() {

    double L;   // load (lbs)
    double d_ft; // distance (feet)
    double h;   // beam height (inches)
    double I;   // moment of inertia (in^4)

    cout << "Load (lbs): ";
    cin >> L;
    cout << "Distance from fixed end (feet): ";
    cin >> d_ft;
    cout << "Beam height (inches): ";
    cin >> h;
    cout << "Moment of inertia (in^4): ";
    cin >> I;

    // conversions
    double d = d_ft * 12.0; //feet to inches
    double c = h / 2.0; //c = distance from neutral axis(center to outer surface)
    double S = (L * d * c) / I;

    cout << "\nStress = " << S << " psi" << endl;

    return 0;
}