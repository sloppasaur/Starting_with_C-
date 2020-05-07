// This program is supposed to find the square root of 5 numbers
// entered by the user. However, if a negative number is entered
// an error message displays and a break statement is used
// stop the loop early
#include <iostream>
#include <cmath>

int main()
{
    double number = 0;
    std::cout << "Enter 5 positive numbers separated by spaces and \n"
              << "I will find their square roots: ";

    for (int count = 1; count <= 5; count ++)
    {
        std::cin >> number;
        if (number >= 0)
        {
            std::cout << "\nThe square root of " << number << " is "
                      << "sqrt(number)";
        }
        else
        {
            std::cout << "\n\n" << number << " is negative. "
                      << "I cannot find the square root \n"
                      << "of a negative number. The program is terminating.\n";
            break;
        }
    }
    std::cout << std::endl;
    return 0;
}
