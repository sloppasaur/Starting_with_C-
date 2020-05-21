// This program has hree functions: main, first and second
#include <iostream>

// Function Prototypes
void first();
void second();

// main
int main()
{
    std::cout << "I am starting in function main.\n";
    first();            // Call first function
    second();           // Call second function
    std::cout << "Now I am back in fucntion main again." << std::endl;
    return 0;
}

// functions
void first()
{
    std::cout << "I am now inside the function first.\n";
}

void second ()
{
    std::cout << "I am now inside the function second.\n";
}
