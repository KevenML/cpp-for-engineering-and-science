/*
* Name: ConvectiveHeatTransfer()
*
* Description: This application calculates the convective heat transfer
*              rate using Newton's Law of Cooling.
*
* Input Params:
*      double h     → heat transfer coefficient
*      double A     → surface area
*      double Ts    → surface temperature
*      double Tinf  → ambient temperature
*      int unitSystem → unit selection (1 = SI, 2 = US)
*
* Return:
*      int → program termination status
*
* Author:
*
* Version: 1.0
*
* Date: 02/20/2026
*
* Course: CIS2485
*
*/


#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double h;        // heat transfer coefficient
    double A;        // surface area
    double Ts;       // surface temperature
    double Tinf;     // ambient temperature
    double Q;        // heat transfer rate
    int unitSystem;

    cout << "=====================================\n";
    cout << " Convective Heat Transfer Calculator\n";
    cout << " (Newton's Law of Cooling)\n";
    cout << "=====================================\n\n";

    cout << "Select Unit System:\n";
    cout << "1. SI Units (W, m^2, C)\n";
    cout << "2. U.S. Customary (BTU/hr, ft^2, F)\n";
    cout << "Choice: ";
    cin >> unitSystem;

    cout << "\nEnter heat transfer coefficient (h): ";
    cin >> h;

    cout << "Enter surface area (A): ";
    cin >> A;

    cout << "Enter surface temperature (Ts): ";
    cin >> Ts;

    cout << "Enter ambient temperature (T∞): ";
    cin >> Tinf;

    // Calculate heat transfer
    Q = h * A * (Ts - Tinf);

    cout << "\n========== RESULTS ==========\n";

    if (unitSystem == 1)
    {
        cout << "Heat Transfer Rate: " << Q << " Watts\n";
    }
    else if (unitSystem == 2)
    {
        cout << "Heat Transfer Rate: " << Q << " BTU/hr\n";
    }
    else
    {
        cout << "Invalid unit selection.\n";
        return 0;
    }

    // Engineering interpretation
    if (Ts < Tinf)
    {
        cout << "Heat is flowing INTO the object.\n";
    }
    else
    {
        cout << "Heat is flowing OUT of the object.\n";
    }

    // Safety warning
    if (fabs(Q) > 10000)
    {
        cout << "WARNING: High heat transfer rate detected.\n";
    }

    cout << "=====================================\n";

    return 0;
}