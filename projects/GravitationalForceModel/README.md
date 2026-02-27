# CIS 2485 – C++ Science & Engineering  
## Console Application

**Student:** Keven Gonzalez  
**Language:** C++  

---

## Assignment Description

The purpose of this assignment is to create a C++ console application that calculates the **weight of an object on Earth** using **Newton’s Second Law of Motion**.

The formula used is:

\[
F = M \times A_e
\]

Where:

- **F** = Object's weight (lbf)  
- **M** = Object's mass (lbm)  
- **Aₑ** = Acceleration due to Earth's gravity  
  - \( 32.2 \, ft/s^2 \)

---

## Engineering Unit Correction

In the English Engineering System, force must be calculated using a conversion constant:

\[
F = \frac{m \times a}{g_c}
\]

Where:

- \( g_c = 32.2 \frac{lbm \cdot ft}{lbf \cdot s^2} \)

Because Earth's gravity equals 32.2 ft/s², the equation simplifies to:

\[
F = m
\]

This means that **on Earth, the numerical value of weight (lbf) equals mass (lbm).**

---

## Hand Calculations

### Case 1: Mass = 5 lbm

\[
F = \frac{5 \times 32.2}{32.2}
\]

\[
F = 5 \, lbf
\]

---

### Case 2: Mass = 4.2 lbm

\[
F = \frac{4.2 \times 32.2}{32.2}
\]

\[
F = 4.2 \, lbf
\]

---

## Program Description

The program:

1. Defines Earth's gravitational acceleration.
2. Uses Newton’s Second Law to compute weight.
3. Calculates weight for:
   - 5 lbm
   - 4.2 lbm
4. Displays results to the console.

