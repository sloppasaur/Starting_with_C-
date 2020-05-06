// This program averages test scores. It asks the usre for the
// number of students and the number of test scores per student.
#include <iostream>
#include <iomanip>

int main()
{
    int numStudents = 0,        // Number of students
        numTests = 0;           // Number of tests
    double average = 0.0;       // Average test score for a student

    // Get the number of students
    std::cout << "This program averages test scores.\n";
    std::cout << "How many students are there? ";
    std::cin >> numStudents;

    //// Get the number of test scores per student
    std::cout << "How many test scores does each student have? ";
    std::cin >> numTests;
    std::cout << std::endl;

    // Read each student's scores and their average
    for (int snum = 1; snum <= numStudents; snum++)
    {
        double total = 0.0;     // Initialize the accumulator

        for (int test = 1; test <= numTests; test++)
        {
            int score = 0;

            // Read a score and add it to the accumulator
            std::cout << "Enter score " << test << " for ";
            std::cout << "student " << snum << ": ";
            std::cin >> score;
            total += score;
        }

        // Compute and display the student's average
        average = total / numTests;
        std::cout << "\n\nThe average score for student " << snum;
        std::cout << " is " << average << "\n\n";
    }

    return 0;
}
