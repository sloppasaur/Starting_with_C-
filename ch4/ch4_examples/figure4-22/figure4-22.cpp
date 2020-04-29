// This program calculates a consultant's charges at $50
// per hour, for a minimum of 5 hours. The ? operator
// adjusts hours to 5 if fewer than 5 hours were worked.
#include <iostream>
#include <iomanip>

int main()
{
    const double PAY_RATE = 50.0; // Hourly Pay rate
    const int MIN_HOURS = 5; // Minimum billable hours
    double hours = 0.0, charges = 0.0;

    // Get the hours worked
    std::cout << "How many hours were worked? ";
    std::cin >> hours;

    // Determine how many hours to charge for
    // KEEP NOTE OF THE ? OPERATOR HERE.
    hours = hours < MIN_HOURS ? MIN_HOURS : hours;

    // Calculate and display the charges
    charges = PAY_RATE * hours;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The charges are $" << charges << std::endl;

    return 0;
}
