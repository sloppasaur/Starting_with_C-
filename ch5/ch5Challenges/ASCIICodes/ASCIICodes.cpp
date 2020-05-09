// Nathaniel Barrera
// Write a program that uses a loop to display the characters
// for each ASCII code 32 - 127. Display 16 characters on each
// line with one space between characters
#include <iostream>
#include <iomanip>

int main()
{
    int code = 32;      // code for ASCII

    while (code <= 127)
    {
        // Every
        for (int r = 0; r < 16; r++)
        {
            std::cout << static_cast<char>(code) << " ";
            code++;
        }
        std::cout << std::endl;
    }

    return 0;
}
