// calculate hourly wages
# include <iostream>
using namespace std;

int main()
{
    double regularWages,        // hold hourly wages 
           basePayRate = 18.25, // Base pay rate
           regularHours = 40.0, // hours worked less overtime
           overtimeWages,       // hold overtime wages
           overtimePayRate = 27.78, // Overtime pay rate
           overtimeHours = 10,  // Overtime hours worked
           totalWages;          // to hold total wages

    // calculate regular wages.
    regularWages = basePayRate * regularHours;

    // calculate overtime wages
    overtimeWages = overtimePayRate * overtimeHours;

    // calculate total wages
    totalWages = regularWages + overtimeWages;

    cout << "wages for this week are $" << totalWages << endl;
    return 0;
}
