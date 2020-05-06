// This program uses a for loop to display the numbers 1-5
// and their squares.
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Number   Square\n";
    std::cout << "---------------\n";

    for (int num = 0; num <= 5; num++)
    {
        std::cout << std::setw(4) << num << std::setw(7) << (num * num)
                  << std::endl;
    }

    return 0;
}
