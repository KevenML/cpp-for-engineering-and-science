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