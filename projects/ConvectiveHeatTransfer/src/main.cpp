#include <iostream>
using namespace std;

int main()
{
    int unit;
    int material;

    double k;          // thermal conductivity
    double T2, T1;     // temperatures
    double w;          // thickness
    double Q;          // heat flux

    cout << "====================================\n";
    cout << " Heat Conduction Calculator\n";
    cout << " Fourier Law  Q = k(T2-T1)/w\n";
    cout << "====================================\n";

    // ask unit only
    cout << "Select Unit System\n";
    cout << "1 = SI (W/m*K)\n";
    cout << "2 = US (BTU/hr*ft*F)\n";
    cin >> unit;

    // ask material only
    cout << "\nSelect Material\n";
    cout << "1 = Air\n";
    cout << "2 = Cement\n";
    cout << "3 = Glass\n";
    cout << "4 = Soil\n";
    cout << "5 = Wood (Oak)\n";
    cout << "6 = Wood (Pine)\n";
    cin >> material;

    // assign conductivity from TABLE
    if(unit == 1)
    {
        if(material == 1) k = 0.025;
        else if(material == 2) k = 0.29;
        else if(material == 3) k = 1.1;
        else if(material == 4) k = 1.5;
        else if(material == 5) k = 0.17;
        else if(material == 6) k = 0.12;
        else { cout << "Invalid material\n"; return 0; }
    }
    else if(unit == 2)
    {
        if(material == 1) k = 0.0015;
        else if(material == 2) k = 0.17;
        else if(material == 3) k = 0.645;
        else if(material == 4) k = 0.88;
        else if(material == 5) k = 0.096;
        else if(material == 6) k = 0.065;
        else { cout << "Invalid material\n"; return 0; }
    }
    else
    {
        cout << "Invalid unit system\n";
        return 0;
    }

    // ===== FIXED DATA FROM PROBLEM (cement verification example) =====
    T2 = 32;     // hot side
    T1 = -7;     // cold side
    w = 0.15;    // thickness

    Q = k * (T2 - T1) / w;

    cout << "\nHeat Flux Q = " << Q;

    if(unit == 1)
        cout << " W/m^2\n";
    else
        cout << " BTU/hr*ft^2\n";

    cout << "====================================\n";

    return 0;
}