/*
---------------------------------------------------------
Project: AcousticIntensityAnalyzer
Course : CIS 2485 – Intro to C++ for Science & Engineering
File   : Assignment-3A.cpp

Description:
Calculates sound loudness in decibels using:

        dB = 10 * log10(SL / RL)

SL = Sound intensity level
RL = Reference intensity level

---------------------------------------------------------
*/

#include <iostream>
#include <cmath>      // for log10()
#include <iomanip>    // for formatting output

using namespace std;

// Function to compute decibel level
double calculateDecibel(double SL, double RL)
{
    return 10.0 * log10(SL / RL);
}

int main()
{
    // Reference Level (RL)
    const double RL = 1.0;

    cout << fixed << setprecision(2);
    cout << "=== Acoustic Intensity Analyzer ===\n\n";

    // Verification case (Busy Street)
    double busyStreet = 10000000.0;
    double dbBusyStreet = calculateDecibel(busyStreet, RL);

    cout << "Busy Street:\n";
    cout << "Sound Intensity = " << busyStreet << " RL\n";
    cout << "Decibel Level   = " << dbBusyStreet << " dB\n\n";

    // a. Whisper
    double whisper = 200.0;
    cout << "Whisper:\n";
    cout << "Sound Intensity = " << whisper << " RL\n";
    cout << "Decibel Level   = "
         << calculateDecibel(whisper, RL) << " dB\n\n";

    // b. Rock Band
    double rockBand = 1000000000000.0;
    cout << "Rock Band:\n";
    cout << "Sound Intensity = " << rockBand << " RL\n";
    cout << "Decibel Level   = "
         << calculateDecibel(rockBand, RL) << " dB\n\n";

    // c. Airplane Takeoff
    double airplane = 100000000000000.0;
    cout << "Airplane Takeoff:\n";
    cout << "Sound Intensity = " << airplane << " RL\n";
    cout << "Decibel Level   = "
         << calculateDecibel(airplane, RL) << " dB\n";

    return 0;
}