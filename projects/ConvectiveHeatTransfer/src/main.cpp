#include <iostream>
using namespace std;

int main()
{
    int unit;
    int material;

    double k;
    double T2 = 32;     // hot side temperature from problem
    double T1 = -7;     // cold side temperature from problem
    double w  = 0.15;   // wall thickness from problem
    double Q;

    cout << "=========================================\n";
    cout << " STEADY HEAT CONDUCTION THROUGH A WALL\n";
    cout << " Fourier Law  Q = k (T2 - T1) / w\n";
    cout << "=========================================\n\n";

    cout << "This program calculates heat flux through a wall\n";
    cout << "using fixed temperatures and thickness from the\n";
    cout << "assignment problem statement.\n\n";

    // UNIT QUESTION
    cout << "Select the UNIT SYSTEM for thermal conductivity data:\n";
    cout << "   Enter 1 → SI Units (W/m*K)\n";
    cout << "   Enter 2 → U.S. Units (BTU/hr*ft*F)\n";
    cout << "Your choice: ";
    cin >> unit;

    // MATERIAL QUESTION
    cout << "\nSelect the WALL MATERIAL:\n";
    cout << "   1 → Air\n";
    cout << "   2 → Cement\n";
    cout << "   3 → Glass\n";
    cout << "   4 → Soil\n";
    cout << "   5 → Wood (Oak)\n";
    cout << "   6 → Wood (Pine)\n";
    cout << "Your choice: ";
    cin >> material;

    // ASSIGN CONDUCTIVITY FROM TABLE
    if(unit == 1)
    {
        if(material == 1) k = 0.025;
        else if(material == 2) k = 0.29;
        else if(material == 3) k = 1.1;
        else if(material == 4) k = 1.5;
        else if(material == 5) k = 0.17;
        else if(material == 6) k = 0.12;
        else { cout << "Invalid material selection.\n"; return 0; }
    }
    else if(unit == 2)
    {
        if(material == 1) k = 0.015;
        else if(material == 2) k = 0.17;
        else if(material == 3) k = 0.645;
        else if(material == 4) k = 0.88;
        else if(material == 5) k = 0.096;
        else if(material == 6) k = 0.065;
        else { cout << "Invalid material selection.\n"; return 0; }
    }
    else
    {
        cout << "Invalid unit system selection.\n";
        return 0;
    }

    // FOURIER CALCULATION
    Q = k * (T2 - T1) / w;

    cout << "\n-----------------------------------------\n";
    cout << "RESULT: Heat Flux Through Wall\n";
    cout << "-----------------------------------------\n";
    cout << "Hot Side Temperature = " << T2 << endl;
    cout << "Cold Side Temperature = " << T1 << endl;
    cout << "Wall Thickness = " << w << endl;
    cout << "Thermal Conductivity Used = " << k << endl;

    if(unit == 1)
        cout << "\nHeat Flux = " << Q << " W/m^2\n";
    else
        cout << "\nHeat Flux = " << Q << " BTU/hr*ft^2\n";

    cout << "-----------------------------------------\n";

    return 0;
}