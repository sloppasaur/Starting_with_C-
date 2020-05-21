// This program calls the displayMessage function from within a loop
#include <iostream>

// Function Prototype
void displayMessage();

// main
int main()
{
    std::cout << "Hello from main.\n\n";

    for (int i = 0; i < 3; i++)
    {
        displayMessage();       // Call displayMessage
    }

    std::cout << "\nNow we are back in the main function again." << std::endl;
    return 0;
}

// function
void displayMessage()
{
    std::cout << "Hello from the displayMessage function.\n";
}
