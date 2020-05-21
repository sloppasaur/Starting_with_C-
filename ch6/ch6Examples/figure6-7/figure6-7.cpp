// This program demonstrates a fucntion with a parameter
#include <iostream>

// Function prototypes
void displayValue(int num);

int main()
{
    std::cout << "I am passing several values to displayValue.\n";
    displayValue(5);            // Call displayValue with argument 5
    displayValue(10);           // Call displayValue with argument 10
    displayValue(2);            // Call displayValue with argument 2
    displayValue(16);           // Call displayValue with argument 16
    std::cout << "Now I am back in main" << std::endl;
    return 0;
}

// function
void displayValue(int num)
{
    std::cout << "The value is " << num << std::endl;
}
