# AcousticIntensityAnalyzer

## Overview
AcousticIntensityAnalyzer is a C++ console application developed for scientific and engineering computation of sound loudness using logarithmic acoustic intensity relationships.

The program calculates sound levels in **decibels (dB)** based on measured sound intensity relative to a reference intensity level.

This project demonstrates:
- Mathematical modeling using logarithmic functions
- Scientific computation in C++
- Engineering-style program structure
- Verification through analytical hand calculation

---

## Background

Sound loudness is measured in **decibels (dB)** and computed using the equation:

\[
dB = 10 \log_{10}\left(\frac{SL}{RL}\right)
\]

Where:

- **SL** = Sound intensity level being measured  
- **RL** = Reference sound intensity level  

Because sound intensity spans extremely large ranges, a **logarithmic scale** is used instead of a linear one.

---

## Features

- Computes decibel levels using scientific formulas
- Modular function-based design
- Fixed precision formatted output
- Verification case included
- Multiple real-world sound comparisons

---

## Test Cases

The program calculates decibel levels for:

| Sound Source        | Intensity (RL)            |
|---------------------|---------------------------|
| Busy Street         | 10,000,000                |
| Whisper             | 200                       |
| Rock Band           | 1,000,000,000,000         |
| Airplane Takeoff    | 100,000,000,000,000       |

---

## Verification (Hand Calculation)

Example — Busy Street:

\[
dB = 10 \log_{10}(10{,}000{,}000)
\]

\[
= 10 \times 7 = 70\ dB
\]

Program output matches analytical calculation.

---

## Compilation & Execution

### Compile
```bash
g++ Assignment-3A.cpp -o AcousticIntensityAnalyzer