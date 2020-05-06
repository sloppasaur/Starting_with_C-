// This program averages 3 test scores. It uses a do-while loop
// that allows the code to repeat as many times as the user wishes.
#include <iostream>

int main()
{
    int score1 = 0, score2 = 0, score3 = 0; // Three test scores
    double average = 0.0;                   // average test score
    char again = ' ';                       // Loop again? Y or n

    do
    {
        // Get three test scores
        std::cout << "\nEnter 3 scores and I will average them: ";
        std::cin >> score1 >> score2 >> score3;

        // Calculate and display the average
        average = (score1 + score2 + score3) / 3.0;
        std::cout << "the average is " << average << "\n\n";

        // Does the user want to average another set?
        std::cout << "Do you want to average another set? (Y/N) ";
        std::cin >> again;
    } while (again == 'Y' || again == 'y');

    return 0;
}
