// This program demonstrates the use of a switch statement
// the program simply tells the user what character they entered
#include <iostream>
#include <iomanip>

int main()
{
    char choice = ' ';

    std::cout << "Enter A, B, or C: ";
    std::cin >> choice;
    choice = toupper(choice);

    switch(choice)
    {
        case 'A':
            std::cout << "You entered A." << std::endl;
            break;
        case 'B':
            std::cout << "You entered B." << std::endl;
            break;
        case 'C':
            std::cout << "You entered C." << std::endl;
            break;
        default:
            std::cout << "You did not enter A, B, or C." << std::endl;
    }

    return 0;
}
