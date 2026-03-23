#include <iostream>
using namespace std;

int main()
{
    int unit, material, problem;

    double k;
    double T2, T1, w;
    double Q;

    cout << "HEAT CONDUCTION PROGRAM\n";
    cout << "Fourier Law  Q = k(T2-T1)/w\n\n";

    cout << "Select problem case:\n";
    cout << "1 = Cement wall verification (Part B)\n";
    cout << "2 = Glass pane (Part C-i)\n";
    cout << "3 = Air column (Part C-ii)\n";
    cin >> problem;

    // assign scenario data
    if(problem == 1)
    {
        T2 = 32;
        T1 = -7;
        w = 0.15;
    }
    else if(problem == 2)
    {
        T2 = 24;
        T1 = 15;
        w = 0.005;
    }
    else if(problem == 3)
    {
        T2 = 23;
        T1 = 14;
        w = 0.10;
    }
    else
    {
        cout << "Invalid problem selection\n";
        return 0;
    }

    cout << "\nSelect unit system:\n";
    cout << "1 = SI\n";
    cout << "2 = US\n";
    cin >> unit;

    cout << "\nSelect material:\n";
    cout << "1 Air\n2 Cement\n3 Glass\n4 Soil\n5 Wood Oak\n6 Wood Pine\n";
    cin >> material;

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
        if(material == 1) k = 0.015;
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

    Q = k * (T2 - T1) / w;

    cout << "\nHeat flux Q = " << Q;

    if(unit == 1)
        cout << " W/m^2\n";
    else
        cout << " BTU/hr*ft^2\n";

    return 0;
}