// This program uses a loop to compute letter grades for multiple students
#include <iostream>

int main()
{
    // Create named constants to hold minimum scores or each letter grade
    const int MIN_A_SCORE = 90,
              MIN_B_SCORE = 80,
              MIN_C_SCORE = 70,
              MIN_D_SCORE = 60,
              MIN_POSSIBLE_SCORE = 0;


    int numStudents = 0,        // Total number of students
        student = 0,            // The current student being processed
        testScore = 0;          // Current student's numeric test score
    char grade = ' ';           // Current student's letter grade
    bool goodScore = true;

    // Get the number of students
    std::cout << "How many students do you have grades for? ";
    std::cin >> numStudents;

    // Loop once for each student
    while (student < numStudents)
    {
        // Get this student's numeric score
        std::cout << "Enter the numeric test score for student #"
                    << student + 1 << ": ";
        std::cin >> testScore;

        // Determine the letter grade
        if (testScore >= MIN_A_SCORE)
        {
            grade = 'A';
        }
        else if (testScore >= MIN_B_SCORE)
        {
            grade = 'B';
        }
        else if (testScore >= MIN_C_SCORE)
        {
            grade = 'C';
        }
        else if (testScore >= MIN_D_SCORE)
        {
            grade = 'D';
        }
        else if (testScore >= MIN_POSSIBLE_SCORE)
        {
            grade = 'F';
        }
        else
        {
            goodScore = false;
        }

        // Display the letter grade
        if (goodScore)
        {
            std::cout << "The letter grade is " << grade << std::endl;
        }
        else
        {
            std::cout << "The score cannot be below zero." << std::endl;
        }

        // Set student to the next student
        student += 1;
    }

    return 0;
}
