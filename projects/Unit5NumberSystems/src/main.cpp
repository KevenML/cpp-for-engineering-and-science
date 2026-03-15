/*
* Name: ConvertFaCent()
*
* Description: Generates a table of decimal numbers and their
*              binary, octal, and hexadecimal equivalents.
*
* Author: Keven Gonzalez
* Version: 1.0
* Date: 02/20/2026
* Course: CIS2485
*/

#include <iostream>
using namespace std;

/* ---------- FUNCTION PROTOTYPES ---------- */
void getRange(int &low, int &high);
int convertBinary(int decimal, int bin[]);
int convertOctal(int decimal, int oct[]);
int convertHex(int decimal, char hex[]);
void printRow(int decimal, int bin[], int bSize,
              int oct[], int oSize,
              char hex[], int hSize);
void generateTable(int low, int high);

/* ---------- MAIN ---------- */
int main()
{
    int low, high;

    getRange(low, high);

    cout << "\nDecimal     Binary        Octal     Hexadecimal\n";

    generateTable(low, high);

    cout << "\nPress any key to continue . . .\n";
    return 0;
}

/* ---------- INPUT FUNCTION ---------- */
void getRange(int &low, int &high)
{
    cout << "Enter the low number: ";
    cin >> low;

    cout << "Enter the high number: ";
    cin >> high;
}

/* ---------- TABLE DRIVER FUNCTION ---------- */
void generateTable(int low, int high)
{
    int decimal = low;

    while (decimal <= high)
    {
        int bin[32], oct[32];
        char hex[32];

        int bSize = convertBinary(decimal, bin);
        int oSize = convertOctal(decimal, oct);
        int hSize = convertHex(decimal, hex);

        printRow(decimal, bin, bSize, oct, oSize, hex, hSize);

        decimal++;
    }
}

/* ---------- BINARY (WHILE LOOP) ---------- */
int convertBinary(int decimal, int bin[])
{
    int temp = decimal;
    int i = 0;

    if (temp == 0)
    {
        bin[i++] = 0;
        return i;
    }

    while (temp > 0)
    {
        bin[i] = temp % 2;
        temp /= 2;
        i++;
    }
    return i;
}

/* ---------- OCTAL (FOR LOOP) ---------- */
int convertOctal(int decimal, int oct[])
{
    int temp = decimal;
    int j = 0;

    if (temp == 0)
    {
        oct[j++] = 0;
        return j;
    }

    for (; temp > 0; temp /= 8)
    {
        oct[j] = temp % 8;
        j++;
    }
    return j;
}

/* ---------- HEX (DO-WHILE LOOP) ---------- */
int convertHex(int decimal, char hex[])
{
    int temp = decimal;
    int k = 0;

    do
    {
        int rem = temp % 16;

        if (rem < 10)
            hex[k] = rem + 48;
        else
            hex[k] = rem + 55;

        temp /= 16;
        k++;

    } while (temp > 0);

    return k;
}

/* ---------- PRINT FUNCTION ---------- */
void printRow(int decimal, int bin[], int bSize,
              int oct[], int oSize,
              char hex[], int hSize)
{
    cout << decimal << "          ";

    for (int i = bSize - 1; i >= 0; i--)
        cout << bin[i];

    cout << "          ";

    for (int i = oSize - 1; i >= 0; i--)
        cout << oct[i];

    cout << "          ";

    for (int i = hSize - 1; i >= 0; i--)
        cout << hex[i];

    cout << endl;
}
