// this menu-driven program uses a switch statement to carry out
// the appropriate set of actions based on the user's menu choice.
#include <iostream>
#include <iomanip>

int main()
{
    // Constants for membership rates
    const double ADULT_RATE = 120.0;
    const double CHILD_RATE = 60.0;
    const double SENIOR_RATE = 100.0;

    int choice = 0;         // Menu choice
    int months = 0;         // Number of months
    double charges = 0.0;   // Monthly charges

    // Display the menu and get the user's choice
    std::cout << "\n   Health Club Membership Menu\n\n";
    std::cout << "1. Standard Adult Membership\n";
    std::cout << "2. Child Membership\n";
    std::cout << "3. Senior Citizen Membership\n";
    std::cout << "4. Quit\n\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    // Validate and process the menu choice
    if (choice >= 1 && choice <= 3)
    {
        std::cout << "Enter the amount of months: ";
        std::cin >> months;

        // Set charges based on user input.
        switch(choice)
        {
            case 1:
                charges = months * ADULT_RATE;
                break;
            case 2:
                charges = months * CHILD_RATE;
                break;
            case 3:
                charges = months * SENIOR_RATE;
                break;
        }

        // Display the monthly charges
        std::cout << std::fixed << std::showpoint << std::setprecision(2);
        std::cout << "The total charges are $" << charges << std::endl;

    }
    else if (choice != 4)
    {
        std::cout << "The valid choices are 1 through 4.\n";
        std::cout << "Run the program again and select one of those numbers."
                    << std::endl;
    }

    return 0;
}
