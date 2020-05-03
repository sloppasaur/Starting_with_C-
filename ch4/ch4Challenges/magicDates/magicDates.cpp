// Nathaniel Barrera
// Write a program that asks the user to enter a month
// (in numeric form), a day, and a two digit year.
// The program should then determine whether the month times the
// the day is equal to the year. If so, it should display
// the date is magic. Other wise, it should display a message saying
// the date is not.
#include <iostream>
#include <iomanip>

int main()
{
    int month = 0;
    int day = 0;
    int year = 0;

    std::cout << "Enter a date in 00 00 00 format (Use spaces)!\n";
    std::cout << "Date: ";
    std::cin >> month >> day >> year;

    if ((month > 0 && day > 0 && year >= 0) &&
        (month <= 12 && day <=31 && year <= 99))
    {
        int magic = month * day;
        switch(month)
        {
            case 1:             // January
            case 3:             // March
            case 5:             // May
            case 7:             // July
            case 8:             // August
            case 10:            // October
            case 12:            // December
                if (magic == year)
                {
                    std::cout << month << '/' << day << '/' << year
                    << " is magic!" << std::endl;
                }
                else
                {
                    std::cout << month << '/' << day << '/' << year
                    << " is not magic." << std::endl;
                }
                break;
            case 2:             // February
                if (day > 28)
                {
                    std::cout << "This month has 28 days." << std::endl;
                }
                else
                {
                    if (magic == year)
                    {
                        std::cout << month << '/' << day << '/' << year
                        << " is magic!" << std::endl;
                    }
                    else
                    {
                        std::cout << month << '/' << day << '/' << year
                        << " is not magic." << std::endl;
                    }
                }
                break;
            case 4:             // April
            case 6:             // June
            case 9:             // September
            case 11:            // November
                if (day > 30)
                {
                    std::cout << "This month has 30 days." << std::endl;
                }
                else
                {
                    if (magic == year)
                    {
                        std::cout << month << '/' << day << '/' << year
                        << " is magic!" << std::endl;
                    }
                    else
                    {
                        std::cout << month << '/' << day << '/' << year
                        << " is not magic." << std::endl;
                    }
                }
                break;
        }
    }
    else
    {
        std::cout << "An invalid month, day, or year has been entered.\n";
        std::cout << "Try again." << std::endl;
    }

    return 0;
}
