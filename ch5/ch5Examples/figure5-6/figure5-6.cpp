// This program uses a while loop to display
// numbers and their squares.
#include <iostream>
#include <iomanip>

int main()
{
    int num = 1;

    std::cout << "Number Square\n";
    std::cout << "=============\n";
    while (num <= 9)
    {
        std::cout << std::setw(4) << num << std::setw(7)
                  << (num * num) << std::endl;
        num++;      // Increment number
    }
    return 0;
}
