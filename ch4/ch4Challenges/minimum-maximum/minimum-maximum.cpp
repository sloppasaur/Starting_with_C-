// Nathaniel Barrera
// Write a program that askes the user to enter two numbers.
// The program should use the conditional operator to
// Determine which number is the smaller and which is the
// larger.
#include <iostream>

// main
int main()
{
    float num1 = 0.0;
    float num2 = 0.0;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2)
    {
        std::cout << num1 << " is greater than " << num2 << std::endl;
    }
    else if (num1 < num2)
    {
        std::cout << num2 << " is greater than " << num1 << std::endl;
    }
    else if (num1 == num2)
    {
        std::cout << num1 << " is the same as " << num2 << std::endl;
    }
    else
    {
        std::cout << "There has been an error." << std::endl;
    }

    return 0;
}
