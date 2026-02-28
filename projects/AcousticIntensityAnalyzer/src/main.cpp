#include <iostream>
using namespace std;

/*
 Acoustic Intensity Analyzer
 I = P / A

 I = intensity (W/m^2)
 P = acoustic power (W)
 A = area (m^2)
*/

int main()
{
    double power;
    double area;

    cout << "Enter acoustic power (W): ";
    cin >> power;

    cout << "Enter surface area (m^2): ";
    cin >> area;

    double intensity = power / area;

    cout << "Acoustic Intensity = "
         << intensity << " W/m^2" << endl;

    return 0;
}