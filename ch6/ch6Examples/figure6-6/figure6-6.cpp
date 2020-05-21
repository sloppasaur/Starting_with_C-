// This program demonstrates a function with a parameter
#include <iostream>

// function prototype
void displayValue(int num);

int main()
{
    std::cout << "I am passing 5 to displayValue.\n";
    displayValue(5);            // Call displayValue with the arugment 5
    std::cout << "I am now back in main." << std::endl;
    return 0;
}

// displayValue
void displayValue(int num)
{
    std::cout << "The value is " << num << std::endl;
}
