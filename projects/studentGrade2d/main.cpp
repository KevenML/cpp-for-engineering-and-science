/*
* Name: StudentGrade2DArrayProgram
*
* Description:
* This application manages grade records for students using
* parallel arrays and a two-dimensional array structure.
* The program allows the user to enter first name, last name,
* and grades for three different classes for five students.
*
* The system performs the following operations:
*     - Stores student names using parallel arrays
*     - Stores course grades using a 2-dimensional array
*     - Calculates the average grade for each student
*     - Determines how many students have an average above 70%
*     - Computes the percentage of students above 70%
*     - Displays a tuition increase message if more than 50%
*       of students have an average greater than 70%
*     - Prints a formatted student grade report
*
* Input Params:
*     firstName[]      - student first names
*     lastName[]       - student last names
*     grades[][]       - grades for each student and class
*
* Output:
*     formatted student grade report table
*     calculated student averages
*     percentage statistic of students above 70%
*     tuition decision message
*
* Author: Keven Gonzalez
*
* Version: 1.0
*
* Date: 03/24/2026
*
* Course: CIS2451 C++ Language Programming
*
*/


#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cctype>
using namespace std;

const int STUDENTS = 5;
const int CLASSES = 3;

// ===== VALIDATE NAME =====
bool isValidName(string name)
{
    for (char c : name)
        if (!isalpha(c))
            return false;
    return true;
}

// ===== INPUT STUDENT DATA =====
void inputStudents(string firstName[], string lastName[],
                   double grades[][CLASSES])
{
    for (int i = 0; i < STUDENTS; i++)
    {
        cout << "\n========== STUDENT #" << i + 1 << " ==========\n";

        while (true)
        {
            cout << "Enter FIRST NAME (letters only): ";
            cin >> firstName[i];

            if (!isValidName(firstName[i]))
            {
                cout << "Invalid input. Try again.\n";
                continue;
            }
            break;
        }

        while (true)
        {
            cout << "Enter LAST NAME (letters only): ";
            cin >> lastName[i];

            if (!isValidName(lastName[i]))
            {
                cout << "Invalid input. Try again.\n";
                continue;
            }
            break;
        }

        for (int j = 0; j < CLASSES; j++)
        {
            while (true)
            {
                cout << "Enter grade (0-100) for CLASS "
                     << j + 1 << ": ";

                cin >> grades[i][j];

                if (cin.fail())
                {
                    cout << "Numbers only. Try again.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }

                if (grades[i][j] < 0 || grades[i][j] > 100)
                {
                    cout << "Out of range. Try again.\n";
                    continue;
                }

                break;
            }
        }
    }
}

// ===== COMPUTE AVERAGES =====
int computeAverages(double grades[][CLASSES], double average[])
{
    int countAbove70 = 0;

    for (int i = 0; i < STUDENTS; i++)
    {
        double sum = 0;

        for (int j = 0; j < CLASSES; j++)
            sum += grades[i][j];

        average[i] = sum / CLASSES;

        if (average[i] > 70)
            countAbove70++;
    }

    return countAbove70;
}

// ===== PRINT REPORT =====
void printReport(string firstName[], string lastName[],
                 double average[], double percent)
{
    cout << "\n\n============================================\n";
    cout << "              STUDENT REPORT                \n";
    cout << "============================================\n";

    cout << left
         << setw(18) << "FIRST NAME"
         << setw(18) << "LAST NAME"
         << setw(12) << "AVERAGE"
         << endl;

    cout << "--------------------------------------------\n";

    cout << fixed << setprecision(2);

    for (int i = 0; i < STUDENTS; i++)
    {
        cout << setw(18) << firstName[i]
             << setw(18) << lastName[i]
             << setw(12) << average[i]
             << endl;
    }

    cout << "\nPercentage above 70% = " << percent << "%\n";

    if (percent > 50)
        cout << "NOTICE: Tuition will increase by 10%.\n";
    else
        cout << "NOTICE: Tuition will NOT increase.\n";
}

int main()
{
    string firstName[STUDENTS];
    string lastName[STUDENTS];
    double grades[STUDENTS][CLASSES];
    double average[STUDENTS];

    inputStudents(firstName, lastName, grades);

    int countAbove70 = computeAverages(grades, average);

    double percent = (double)countAbove70 / STUDENTS * 100;

    printReport(firstName, lastName, average, percent);

    return 0;
}