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
using namespace std;

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main()
{
    const int STUDENTS = 5;
    const int CLASSES = 3;

    string firstName[STUDENTS];
    string lastName[STUDENTS];
    double grades[STUDENTS][CLASSES];
    double average[STUDENTS];

    int countAbove70 = 0;

    // ===== INPUT SECTION =====
    for (int i = 0; i < STUDENTS; i++)
    {
        cout << "\n==============================\n";
        cout << "Entering information for STUDENT #" << i + 1 << endl;
        cout << "==============================\n";

        cout << "Enter FIRST NAME: ";
        cin >> firstName[i];

        cout << "Enter LAST NAME: ";
        cin >> lastName[i];

        double sum = 0;

        for (int j = 0; j < CLASSES; j++)
        {
            while (true)
            {
                cout << "Enter NUMERIC grade (0 - 100) for CLASS "
                     << j + 1 << ": ";

                cin >> grades[i][j];

                // check if user typed letters
                if (cin.fail())
                {
                    cout << "Invalid input. Please enter NUMBERS only.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }

                // check range
                if (grades[i][j] < 0 || grades[i][j] > 100)
                {
                    cout << "Grade must be between 0 and 100. Try again.\n";
                    continue;
                }

                break; // valid input
            }

            sum += grades[i][j];
        }

        average[i] = sum / CLASSES;

        if (average[i] > 70)
            countAbove70++;
    }

    double percent = (double)countAbove70 / STUDENTS * 100;

    // ===== OUTPUT REPORT =====
    cout << "\n\n==============================================\n";
    cout << "               STUDENT REPORT                  \n";
    cout << "==============================================\n";

    cout << left
         << setw(15) << "FIRST NAME"
         << setw(15) << "LAST NAME"
         << setw(10) << "AVERAGE"
         << endl;

    cout << "----------------------------------------------\n";

    cout << fixed << setprecision(2);

    for (int i = 0; i < STUDENTS; i++)
    {
        cout << setw(15) << firstName[i]
             << setw(15) << lastName[i]
             << setw(10) << average[i]
             << endl;
    }

    cout << "\nPercentage of students above 70% = "
         << percent << "%\n";

    if (percent > 50)
        cout << "NOTICE: Tuition will increase by 10% next semester.\n";
    else
        cout << "NOTICE: Tuition will NOT increase next semester.\n";

    return 0;
}