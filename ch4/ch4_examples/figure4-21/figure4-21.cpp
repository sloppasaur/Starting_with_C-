// This program demonstrates some of the available
// C++ character testing functions
#include <iostream>
#include <cctype>

int main()
{
    char input = ' ';

    std::cout << "Enter any character: ";
    std::cin >> input;

    std::cout << "The character you enteres is: " << input << std::endl;
    std::cout << "Its ASCII code is: " << static_cast<int>(input) << std::endl;

    if (isalpha(input))
        std::cout << "That's an alphabetic character.\n";

    if (isdigit(input))
        std::cout << "That's a numeric character.\n";

    if (islower(input))
        std::cout << "The letter you entered is lowercase.\n";

    if (isupper(input))
        std::cout << "The letter you entered is uppercase.\n";

    if (isspace(input))
        std::cout << "That's a whitespace character!\n";

    return 0;
}
