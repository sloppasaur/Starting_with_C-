// This program has two functions, main and displayMessage.
#include <iostream>

// Function Prototype
void displayMessage();

// Main
int main()
{
    std::cout << "Hello from main.\n";
    displayMessage();           // Call displayMessage
    std::cout << "Now we are back in the main function again.\n";
    return 0;
}

// function
void displayMessage()
{
    std::cout << "Hello from the other siiiiiiiiiiiiiiiiddddde." << std::endl;
}
