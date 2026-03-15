# Unit 5 Assignment

## Number System Conversion Table

**Course:** CIS-2485 C++ Science & Engineering
**Author:** Keven Gonzalez
**Version:** 1.0
**Date:** 02/20/2026

---

## Description

This program generates a table of decimal numbers and their equivalent
binary, octal, and hexadecimal representations.

The user is prompted to enter a **low value** and a **high value**.
The application then prints a formatted conversion table to the console
for all decimal numbers within the specified range.

---

## Program Design Requirements

The implementation follows the assignment constraints:

* A **while loop** is used to generate binary values
* A **for loop** is used to generate octal values
* A **do-while loop** is used to generate hexadecimal values
* Output is printed directly to the console
* No string formatting libraries or advanced formatting tools are used

---

## Folder Structure

```
Unit5NumberSystems/
│
├── data/
├── include/
├── src/
│   └── main.cpp
├── test/
└── README.md
```

---

## Compilation

From the project root directory run:

```
g++ src/main.cpp -o Unit5Table
```

---

## Execution

Run the program using:

```
./Unit5Table
```

---

## Sample Program Behavior

1. User enters a starting decimal number
2. User enters an ending decimal number
3. Program prints a conversion table showing

* Decimal
* Binary
* Octal
* Hexadecimal

---

## Notes

This project demonstrates understanding of

* Number system conversions
* Loop control structures
* Console based program interaction
* Basic memory handling using arrays

---

## End of File
