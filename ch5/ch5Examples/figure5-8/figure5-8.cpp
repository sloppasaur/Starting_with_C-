// this program takes daily sales figure for
// a 5-day sales week and calculates their total.
#include <iostream>
#include <iomanip>

int main()
{
    const int NUM_DAYS = 5;
    int day = 0;                // The day being processed
    double dailySales = 0.0,    // The sales amount for a single day
           totalSales = 0.0;    // Accumulator, initialized with 0.

    // Get the sales for each day and accumulate a total
    // The loop control variable, day, is a counter
    day = 1;
    while (day <= NUM_DAYS)
    {
        std::cout << "Enter the sales for day " << day << ": ";
        std::cin >> dailySales;

        totalSales = totalSales + dailySales;   // Accumulate the total.
        day++;                                  // Increment the counter
    }

    // Display the total sales
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nTotal sales: $" << totalSales << std::endl;

    return 0;
}
