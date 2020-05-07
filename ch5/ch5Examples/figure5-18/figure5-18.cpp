// This program reads data from a file.
#include <iostream>
#include <fstream>              // Needed to use files
#include <string>

int main()
{
    std::ifstream inputFile;
    std::string name = " ";

    // Open the input file
    inputFile.open("Friends.txt");

    std::cout << "Here are the name stored Friends.txt file.\n";

    for (int count = 1; count <= 3; count++)
    {
        inputFile >> name;          // Read the next name from the file and
        std::cout << name << std::endl; // and display it
    }

    inputFile.close();             // Close the file
    return 0;
}
