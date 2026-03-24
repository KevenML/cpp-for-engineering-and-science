/*
 * Name: ArithmeticQuizApp()
 *
 * Description: This application helps an elementary school student
 *              practice basic arithmetic operations. The program
 *              generates two random positive single-digit integers
 *              and allows the student to select an operation from
 *              a menu (Addition, Subtraction, Multiplication,
 *              Division, or Modulus). The student answers repeated
 *              questions until correct or enters -1 to return to
 *              the main menu. The program tracks summary statistics
 *              for correct and incorrect responses.
 *
 * Input Params:
 *      int menuChoice   - User selected arithmetic operation
 *      int answer       - Student’s answer to generated question
 *
 * Return:
 *      int              - Program terminates when user selects Exit
 *
 * Author: Keven Gonzalez
 *
 * Version: 1.0
 *
 * Date: 03/24/2026
 *
 * Course: CIS2485
 *
 */

 #include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototypes
void addition();
void subtraction();
void multiplication();
void divisionFunc();
void modulusFunc();

int main()
{
    srand(time(0));

    int choice;

    cout << "********* Welcome to the Arithmetic Quiz *********\n";

    do
    {
        cout << "\nMENU:\n";
        cout << "1 Enter 1 for Addition\n";
        cout << "2 Enter 2 for Subtraction\n";
        cout << "3 Enter 3 for Multiplication\n";
        cout << "4 Enter 4 for Division\n";
        cout << "5 Enter 5 for Modulus\n";
        cout << "6 Enter 6 to Exit\n";

        cin >> choice;

        switch (choice)
        {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: divisionFunc(); break;
            case 5: modulusFunc(); break;
            case 6: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}

// ================= ADDITION =================
void addition()
{
    int correct = 0, incorrect = 0, total = 0;

    while (true)
    {
        int a = rand() % 9 + 1;
        int b = rand() % 9 + 1;
        int ans;

        cout << "\nHow much is " << a << " plus " << b << "?\n";

        while (true)
        {
            cout << "Enter your answer (-1 to return to menu): ";
            cin >> ans;

            if (ans == -1)
            {
                cout << "\nSUMMARY:\n";
                cout << "Addition Problems Played: " << total << endl;
                cout << "Number answered correctly: " << correct << endl;
                cout << "Number answered incorrectly: " << incorrect << endl;
                return;
            }

            total++;

            if (ans == a + b)
            {
                cout << "Very Good!\n";
                correct++;
                break;
            }
            else
            {
                cout << "No. Please try again.\n";
                incorrect++;
            }
        }
    }
}

// ================= SUBTRACTION =================
void subtraction()
{
    int correct = 0, incorrect = 0, total = 0;

    while (true)
    {
        int a = rand() % 9 + 1;
        int b = rand() % 9 + 1;
        int ans;

        cout << "\nHow much is " << a << " minus " << b << "?\n";

        while (true)
        {
            cout << "Enter your answer (-1 to return to menu): ";
            cin >> ans;

            if (ans == -1)
            {
                cout << "\nSUMMARY:\n";
                cout << "Subtraction Problems Played: " << total << endl;
                cout << "Number answered correctly: " << correct << endl;
                cout << "Number answered incorrectly: " << incorrect << endl;
                return;
            }

            total++;

            if (ans == a - b)
            {
                cout << "Very Good!\n";
                correct++;
                break;
            }
            else
            {
                cout << "No. Please try again.\n";
                incorrect++;
            }
        }
    }
}

// ================= MULTIPLICATION =================
void multiplication()
{
    int correct = 0, incorrect = 0, total = 0;

    while (true)
    {
        int a = rand() % 9 + 1;
        int b = rand() % 9 + 1;
        int ans;

        cout << "\nHow much is " << a << " times " << b << "?\n";

        while (true)
        {
            cout << "Enter your answer (-1 to return to menu): ";
            cin >> ans;

            if (ans == -1)
            {
                cout << "\nSUMMARY:\n";
                cout << "Multiplication Problems Played: " << total << endl;
                cout << "Number answered correctly: " << correct << endl;
                cout << "Number answered incorrectly: " << incorrect << endl;
                return;
            }

            total++;

            if (ans == a * b)
            {
                cout << "Very Good!\n";
                correct++;
                break;
            }
            else
            {
                cout << "No. Please try again.\n";
                incorrect++;
            }
        }
    }
}

// ================= DIVISION =================
void divisionFunc()
{
    int correct = 0, incorrect = 0, total = 0;

    while (true)
    {
        int b = rand() % 9 + 1;
        int result = rand() % 9 + 1;
        int a = b * result;   // ensures integer division
        int ans;

        cout << "\nHow much is " << a << " divided by " << b << "?\n";

        while (true)
        {
            cout << "Enter your answer (-1 to return to menu): ";
            cin >> ans;

            if (ans == -1)
            {
                cout << "\nSUMMARY:\n";
                cout << "Division Problems Played: " << total << endl;
                cout << "Number answered correctly: " << correct << endl;
                cout << "Number answered incorrectly: " << incorrect << endl;
                return;
            }

            total++;

            if (ans == result)
            {
                cout << "Very Good!\n";
                correct++;
                break;
            }
            else
            {
                cout << "No. Please try again.\n";
                incorrect++;
            }
        }
    }
}

// ================= MODULUS =================
void modulusFunc()
{
    int correct = 0, incorrect = 0, total = 0;

    while (true)
    {
        int a = rand() % 9 + 1;
        int b = rand() % 9 + 1;
        int ans;

        cout << "\nHow much is " << a << " modulus " << b << "?\n";

        while (true)
        {
            cout << "Enter your answer (-1 to return to menu): ";
            cin >> ans;

            if (ans == -1)
            {
                cout << "\nSUMMARY:\n";
                cout << "Modulus Problems Played: " << total << endl;
                cout << "Number answered correctly: " << correct << endl;
                cout << "Number answered incorrectly: " << incorrect << endl;
                return;
            }

            total++;

            if (ans == a % b)
            {
                cout << "Very Good!\n";
                correct++;
                break;
            }
            else
            {
                cout << "No. Please try again.\n";
                incorrect++;
            }
        }
    }
}