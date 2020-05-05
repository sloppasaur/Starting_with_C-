// This program demonstrates a simiple while loop.
#include <iostream>

int main()
{
    int count = 1;

    while (count <= 5)
    {
        std::cout << "Hello!   ";
        count += 1;
    }
    std::cout << "\nThat's all folks!" << std::endl;

    return 0;
}
