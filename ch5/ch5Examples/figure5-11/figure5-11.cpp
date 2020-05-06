// This program-driven Health Club membership program carries out the
// appropriate actions based on the menu choice entered. A do-while loop
// allows the program to repeat until the user selects menu choice 4.
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

    do
    {
        // Display the menu and get the user's choice
        std::cout << "\n    Health Club Membership Menu\n\n";
        std::cout << "1. Standard Adult Membership\n";
        std::cout << "2. Child Membership\n";
        std::cout << "3. Senior Citizen Membership\n";
        std::cout << "4. Quit the program" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Validate the menu selection
        while ((choice < 1) || (choice > 4))
        {
            std::cout << "Please enter 1, 2, 3, or 4: ";
            std::cin >> choice;
        }

        // Process the user's choice
        if (choice != 4)
        {
            std::cout << "Enter how many months: ";
            std::cin >> months;

            // Compute charges based on user input
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
    } while(choice != 4);       // Loop again if the user not select
                                // choice 4 to quit.
    return 0;
}
