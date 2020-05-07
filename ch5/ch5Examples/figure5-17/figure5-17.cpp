// This program writes usre input to a file.
#include <iostream>
#include <fstream>              // Need to use files
#include <string>

int main()
{
    std::ofstream outputFile;
    std::string name = " ";

    // Open the output file
    outputFile.open("Friends.txt");

    // Use a loop to get the naes of three friends
    // and write each name in the output file
    std::cout << "Enter the names of three friends.\n";

    for (int count = 1; count <= 3; count++)
    {
        std::cout << "Friend #" << count << ": ";
        std::cin >> name;
        outputFile << name << std::endl;
    }

    // Close the file
    outputFile.close();

    std::cout << "The names were saved to a file.\n";
    return 0;
}
