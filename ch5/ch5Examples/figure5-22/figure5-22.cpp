// This program attempts to average 2 test scores for each
// student in a class. However, it contains logic errors.
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string name = " ";          // Student first name

    int count = 1,              // student counter
        score = 0;              // An individual score read in
    double totalScore = 0;         // Average of a student's 2 scores
    double average = 0;

    std::cout << std::fixed << std::showpoint << std::setprecision(1);
    std::cout << "Enter the first name of student " << count
              << " (or Q to quit): ";
    std::cin >> name;

    while (name != "Q" && name != "q")
    {
        // Get and validate the first score
        std::cout << "Enter score 1: ";
        std::cin >> score;
        while (score < 0 || score > 100)
        {
            std::cout << "Score must be between 0 and 100. Please reenter: ";
            std::cin >> score;
        }
        totalScore += score;        // Add the second score onto the total

        // Get and validate the second score
        std::cout << "Enter score 2: ";
        std::cin >> score;
        while (score < 0 || score > 100)
        {
            std::cout << "Score must be between 0 and 100. Please reenter: ";
            std::cin >> score;
        }
        totalScore += score;

        // Calculate and print average
        average = totalScore / 2;
        std::cout << name << std::setw(6) << average << std::endl;

        // Get the next student name;
        totalScore = 0;
        std::cout << "Enter the first name of student " << ++count
                  << " (or Q to quit): ";
        std::cin >> name;
    }

    return 0;
}
