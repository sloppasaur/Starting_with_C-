// Nathaniel Barrera
// Write a program that asks the user to enter a number
// within the range of 1 through 10. Use a switch statement
// to display the Roman numeral version of that number.
#include <iostream>

int main()
{
    int num = 0;

    std::cout << "Enter a number between 1 and 10: ";
    std::cin >> num;

    switch(num)
    {
        case 1:
            std::cout << "1 converted is: I\n";
            break;
        case 2:
            std::cout << "2 converted is: II\n";
            break;
        case 3:
            std::cout << "3 converted is: III\n";
            break;
        case 4:
            std::cout << "4 converted is: IV\n";
            break;
        case 5:
            std::cout << "5 converted is: V\n";
            break;
        case 6:
            std::cout << "6 converted is: VI\n";
            break;
        case 7:
            std::cout << "7 converted is: VII\n";
            break;
        case 8:
            std::cout << "8 converted is: VIII\n";
            break;
        case 9:
            std::cout << "9 converted is: IX\n";
            break;
        case 10:
            std::cout << "10 converted is: X\n";
            break;
        default:
            std::cout << "ERROR\n" << num << " is ";
            std::cout << "outside 1 and 10." << std::endl;
    }

    return 0;
}
