// This program calculates DVD rental charges where every third DVD
// is free. It illustrates the use of the continue statement.
#include <iostream>
#include <iomanip>

int main()
{
    int numDVDs = 0;            // Number of Dvd's being rented
    double total = 0;           // Accumlates total charges for all DVDs
    char current = ' ';         // Current release? (Y/N)

    // Get number of DVDs rented
    std::cout << "How many DVDs are being rented? ";
    std::cin >> numDVDs;

    // Determine the charges
    for (int dvdCount = 1; dvdCount <= numDVDs; dvdCount++)
    {
        if (dvdCount % 3 == 0) // 3rd DVD is free
        {
            std::cout << "DVD #" << dvdCount << " is free!\n";
            continue;
        }
        std::cout << "Is DVD D" << dvdCount << " a current release (Y/N)? ";
        std::cin >> current;
        if ((current == 'Y') || (current == 'y'))
        {
            total += 3.50;
        }
        else
        {
            total += 2.50;
        }
    }

    // Display the total charges
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The total is $" << total << std::endl;
    return 0;
}
