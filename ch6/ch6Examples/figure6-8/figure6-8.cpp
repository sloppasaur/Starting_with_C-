// This program demonstrates a function with three parameters
#include <iostream>

// Function Prototype
void showSum(int num1, int num2, int num3);

int main()
{
    int value1 = 0,
        value2 = 0,
        value3 = 0;

    // Get 3 integers
    std::cout << "Enter three integers and I will display"
              << " their sum: ";
    std::cin >> value1 >> value2 >> value3;

    // Call showSum, passing 3 arguments
    showSum(value1, value2, value3);
    return 0;
}

// showSum
void showSum(int num1, int num2, int num3)
{
    std::cout << "The sum is " << (num1 + num2 + num3) << std::endl;
}
