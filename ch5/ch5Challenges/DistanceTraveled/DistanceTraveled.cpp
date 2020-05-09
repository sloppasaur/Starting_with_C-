// Write a program that asks he user for the speed of a vehicle
// (in miles per hour) and how many hours it has traveled. It
// should then use a loop to display the total distance
// traveled at the end of each hour of that time period.
#include <iostream>
#include <iomanip>

int main()
{
    int speed = 0,                  // Speed of the vehicle (mph)
        time = 0;                   // time traveled.

    std::cout << "What is the speed of the vehicle "
              << "in miles per hour? ";
    std::cin >> speed;
    std::cout << "How many hours has it traveled? ";
    std::cin >> time;

    // Validates if the input is valid.
    do
    {
        std::cout << std::endl;
        if (speed < 0)
        {
            std::cout << "The speed must be greater "
                      << "than 0.\n";
            std::cout << "What is the speed of the vehicle "
                      << "in miles per hour? ";
            std::cin >> speed;
        }
        if (time < 0)
        {
            std::cout << "Time can only be positive.\n";
            std::cout << "How many hours did the vechicle "
                      << "travel? ";
            std::cin >> time;
        }
    } while (speed < 0 || time < 0);

    // Display
    std::cout << " Hour" << "      "
              << "Miles Traveled";
    std::cout << "\n--------------------------\n";

    for (int i = 1; i <= time; i++)
    {
        int distance = i * speed;
        std::cout << "  " <<  i << std::setw(14) << distance
                  << std::endl;
    }


    return 0;
}
