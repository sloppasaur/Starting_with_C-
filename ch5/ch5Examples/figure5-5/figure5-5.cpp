// This program demonstrates the postfix and prefix
// modes of the increment and decrement operators.
#include <iostream>

int main()
{
    int num = 4;

    // Illustrate postfix and prefix ++ operator
    std::cout << num << "  ";       // Displays 4
    std::cout << num++ << "  ";     // Displays 4, then adds 1 to num
    std::cout << num << "  ";       // Displays 5
    std::cout << ++num << "  \n";     // Adds 1 to num, then displays 6

    // Illustrate postfix and prefix -- operator
    std::cout << num << "  ";       // Displays 6
    std::cout << num-- << "  ";     // Displays 6, then subtracts 1 from num
    std::cout << num << "  ";       // Displays 5
    std::cout << --num << "  \n";     // Subtracts 1 from num, then dipslays 4.

    return 0;
}
