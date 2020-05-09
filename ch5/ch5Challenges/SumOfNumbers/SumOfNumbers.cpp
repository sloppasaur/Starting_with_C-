// Nathaniel Barrera
// Write a program that asks the user for a positive integer value and
// that uses a loop to validate the input. The program should then use a
// second loop to compute the sum of all the integers from 1 up to the
// number entered. For example, if the user enters 50, the loop will find
// the sum of 1, 2, 3, 4, ... 50.
#include <iostream>
#include <iomanip>

int main()
{
    int input = 0,          // number to be added to
        total = 0;          // Accumulator

    std::cout << "Enter a number: ";
    std::cin >> input;

    while (input < 0)
    {
        std::cout << "The number must be positive.\n";
        std::cout << "Enter a number: ";
        std::cin >> input;
    }

    for (int i = 1; i <= input; i++)
    {
        total = total + i;
        std::cout << i << std::setw(10) << total << std::endl;
    }

    return 0;
}
