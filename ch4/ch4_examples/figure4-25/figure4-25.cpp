// This program is carefully constructed to use the
// "fall through" feature of the switch statement.
#include <iostream>

int main()
{
    int modelNum = 0;

    // Display available models and get te user's choice
    std::cout << "Our TVs come in three models: the 100, 200, and 300. \n";
    std::cout << "Which do you want? ";
    std::cin >> modelNum;

    // Display the features of the selected model
    std::cout << "\nThat model has the following features: \n";

    switch (modelNum)
    {
        case 300:
            std::cout << "  Built-in DVR\n";
        case 200:
            std::cout << "  1080p HD picture\n";
        case 100:
            std::cout << "  42\" LCD flat screen\n";
            break; // Remember to add a break!
        default:
            std::cout << "You can only choose the 100, 200, or 300.\n";
    }

        return 0;
}
