/*
* Name: MarketingCompanyReportProgram
*
* Description:
* This application manages employee payroll information for a marketing company.
* The program uses parallel arrays to store employee first name, last name,
* identification number, hours worked, and hourly pay rate.
*
* The system provides a menu-driven interface that allows the user to:
*     - Print a formatted employee payroll report
*     - Search for an employee by ID
*     - Sort employee data by last name or employee ID
*     - Calculate total pay for each employee
*     - Display the average hours worked per week
*
* Input Params:
*     firstName[]  - employee first names
*     lastName[]   - employee last names
*     empID[]      - employee identification numbers
*     hours[]      - weekly hours worked
*     payRate[]    - hourly pay rate
*
* Output:
*     formatted payroll report table
*     individual employee search results
*     calculated total pay values
*     average hours worked statistic
*
* Author: Keven Gonzalez
*
* Version: 1.0
*
* Date: 03/24/2026
*
* Course: CIS2485 C++ Science & Engineering
*
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// symbolic constant
const int SIZE = 5;

// function prototypes
void printReport(string first[], string last[], int id[], double hours[], double rate[]);
void searchEmployee(string first[], string last[], int id[], double hours[], double rate[]);
void sortByLast(string first[], string last[], int id[], double hours[], double rate[]);
void sortByID(string first[], string last[], int id[], double hours[], double rate[]);
void calculatePay(double hours[], double rate[]);

int main()
{
    string first[SIZE] = {"Brian","David","Kathy","Janet","Steve"};
    string last[SIZE]  = {"Adams","Eisenhower","Jones","Williams","Bradford"};
    int id[SIZE]       = {612366,957654,123456,245695,245690};
    double hours[SIZE] = {36,38,43,39,39};
    double rate[SIZE];

    int choice;

    // interactive pay rate input
    cout << "Enter hourly pay rate for each employee\n";
    for(int i=0;i<SIZE;i++)
    {
        cout << first[i] << " " << last[i] << ": ";
        cin >> rate[i];

        while(rate[i] < 0)
        {
            cout << "Invalid. Enter again: ";
            cin >> rate[i];
        }
    }

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Print Employee Report\n";
        cout << "2. Search Employee\n";
        cout << "3. Sort by Last Name\n";
        cout << "4. Sort by ID\n";
        cout << "5. Calculate Pay\n";
        cout << "6. Quit\n";
        cout << "Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: printReport(first,last,id,hours,rate); break;
            case 2: searchEmployee(first,last,id,hours,rate); break;
            case 3: sortByLast(first,last,id,hours,rate); break;
            case 4: sortByID(first,last,id,hours,rate); break;
            case 5: calculatePay(hours,rate); break;
        }

    } while(choice != 6);

    return 0;
}

//---------------------------------------------------------

void printReport(string first[], string last[], int id[], double hours[], double rate[])
{
    cout << "\nMARKETING COMPANY REPORT\n\n";

    cout << left << setw(12) << "FIRST"
         << setw(15) << "LAST"
         << setw(10) << "ID"
         << setw(10) << "HOURS"
         << setw(10) << "RATE"
         << setw(12) << "TOTAL PAY" << endl;

    for(int i=0;i<SIZE;i++)
    {
        double pay = hours[i] * rate[i];

        cout << left << setw(12) << first[i]
             << setw(15) << last[i]
             << setw(10) << id[i]
             << setw(10) << hours[i]
             << setw(10) << fixed << setprecision(2) << rate[i]
             << setw(12) << pay << endl;
    }
}

//---------------------------------------------------------

void searchEmployee(string first[], string last[], int id[], double hours[], double rate[])
{
    int searchID;
    cout << "Enter employee ID to search: ";
    cin >> searchID;

    for(int i=0;i<SIZE;i++)
    {
        if(id[i] == searchID)
        {
            cout << first[i] << " " << last[i]
                 << " worked " << hours[i]
                 << " hours.\n";
            return;
        }
    }

    cout << "Employee not found.\n";
}

//---------------------------------------------------------

void sortByLast(string first[], string last[], int id[], double hours[], double rate[])
{
    for(int i=0;i<SIZE-1;i++)
    {
        for(int j=i+1;j<SIZE;j++)
        {
            if(last[i] > last[j])
            {
                swap(last[i],last[j]);
                swap(first[i],first[j]);
                swap(id[i],id[j]);
                swap(hours[i],hours[j]);
                swap(rate[i],rate[j]);
            }
        }
    }
    cout << "Sorted by last name. Now select 1._Print_Employee_report for resalt \n";
}

//---------------------------------------------------------

void sortByID(string first[], string last[], int id[], double hours[], double rate[])
{
    for(int i=0;i<SIZE-1;i++)
    {
        for(int j=i+1;j<SIZE;j++)
        {
            if(id[i] > id[j])
            {
                swap(last[i],last[j]);
                swap(first[i],first[j]);
                swap(id[i],id[j]);
                swap(hours[i],hours[j]);
                swap(rate[i],rate[j]);
            }
        }
    }
    cout << "Sorted by ID. Now select 1._Print_Employee_report for resalt\n";
}

//---------------------------------------------------------

void calculatePay(double hours[], double rate[])
{
    double totalHours = 0;

    for(int i=0;i<SIZE;i++)
    {
        double pay = hours[i] * rate[i];
        cout << "Employee " << i+1
             << " Pay: $" << pay << endl;

        totalHours += hours[i];
    }

    cout << "Average Hours Worked: "
         << totalHours / SIZE << endl;
}