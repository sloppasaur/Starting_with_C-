// Nathaniel Barrera
// Write a program that asks the user to enter a month
// (in numeric form), a day, and a two digit year.
// The program should then determine whether the month times the
// the day is equal to the year. If so, it should display
// the date is magic. Other wise, it should display a message saying
// the date is not.
#include <iostream>

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
            // January
            case 1:
                if (magic = year)
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
            // February
            case 2:
                if (day > 28)
                {
                    std::cout << "This month has 28 days." << std::endl;
                }
                else
                {
                    if (magic = year)
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
            // March
            case 3:
                if (magic = year)
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
            // April
            case 4:
                if (day > 30)
                {
                    std::cout << "This month has 30 days." << std::endl;
                }
                else
                {
                    if (magic = year)
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
            // May
            case 5:
                if (magic = year)
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
            // June
            case 6:
                if (day > 30)
                {
                    std::cout << "This month has 30 days." << std::endl;
                }
                else
                {
                    if (magic = year)
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
            // July
            case 7:
                if (magic = year)
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
            // August
            case 8:
                if (magic = year)
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
            // September
            case 9:
                if (day > 30)
                {
                    std::cout << "This month has 30 days." << std::endl;
                }
                else
                {
                    if (magic = year)
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
            // October
            case 10:
                if (magic = year)
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
            // November
            case 11:
                if (day > 30)
                {
                    std::cout << "This month has 30 days." << std::endl;
                }
                else
                {
                    if (magic = year)
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
            // December
            case 12:
                if (magic = year)
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
            default:
                std::cout << "ERROR!!!" << std::endl;
                std::cout << "You did not enter a valid month." << std::endl;
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
