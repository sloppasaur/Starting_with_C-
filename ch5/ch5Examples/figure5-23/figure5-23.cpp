// This program produces a loan amortization table
// for the Central Mountain Credit Union.
#include <iostream>
#include <iomanip>
#include <cmath>              // Needed for pow function

int main()
{
    double loan = 0,            // Loan amount
           rate = 0,            // Annual interest rate
           moInterestRate = 0,  // Monthly interest rate
           years = 0,           // Years of loan
           balance = 0,         // Monthly balance
           term = 0,            // Used to calculate payment
           payment = 0;         // Monthly Payment
    int    numPayments = 0;     // Number of payments

    // Get loan information
    std::cout << "Loan amount: $";
    std::cin >> loan;
    std::cout << "Annual interest rate (entered as a decimal): ";
    std::cin >> rate;
    std::cout << "Years of loan: ";
    std::cin >> years;

    // Calculate monthly payment
    numPayments = static_cast<int>(12 * years);
    moInterestRate = rate / 12;
    term = pow((1 + moInterestRate), numPayments);
    payment = (loan * moInterestRate * term) / (term - 1.0);

    // Display monthly payment
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Monthly payment : $" << payment << std::endl;

    // Display report header
    std::cout << std::endl;
    std::cout << std::setw(5)  << "Month"     << std::setw(10) << "Interest";
    std::cout << std::setw(10) << "Principal" << std::setw(9)  << "Balance"
              << std::endl;
    std::cout << "----------------------------\n";

    balance = loan;     // Remaining balance starts out as full loan amount

    // Produce a listing for each month
    for (int month = 1; month <= numPayments; month++)
    {
        double moInterest = 0,  // Amount of pmt that pays interest
               principal = 0;   // Amount of pmt that lowers the balance

        // Calculate amount paid for this month's interest and principal
        moInterest = moInterestRate * balance;  // Calculate interest first
        if (month != numPayments)               // If not the final month
        {                                       // rest of pmt goes
            principal = payment - moInterest;   // to principal
        }
        else                                    // It's the last month so
        {                                       // pay exact final balance
            principal = balance;
            payment = balance + moInterest;
        }

        // Calculate new loan balnce            // Only principal reduces the
        balance -= principal;                   // balance, not the whole pmt

        // Display this month's payment figures
        std::cout << std::setw(4)  << month     << std::setw(10) << moInterest;
        std::cout << std::setw(10) << principal << std::setw(10) << balance
                  << std::endl;
    }

    return 0;

}
