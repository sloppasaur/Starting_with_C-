// This program writes data to a file
#include <iostream>
#include <fstream>          // Needed to use files

int main()
{
    std::ofstream outputFile;

    // Open the output File
    outputFile.open("demofile.txt");

    std::cout << "Now writing data to the file .\n";

    // Write four names to the file.\n"
    // You don't need std:: beforehand.
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // Close the file
    outputFile.close();

    std::cout << "Done.\n";
    return 0;
}
