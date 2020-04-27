// This program uses an if/else if statement to assign a
// letter grade of A, B, C, D, or F to a numeric teset score.
#include <iostream>

int main() {
  // Create names constants to hold minimum
  // scores required for each letter grade.

  const int MIN_A_SCORE = 90,
            MIN_B_SCORE = 80,
            MIN_C_SCORE = 70,
            MIN_D_SCORE = 60;

  int testScore = 0; // Holds a numer test score
  char grade = ' ';  // Holds a letter grade

  // Get the numeric score
  std::cout << "Enter your numeric test score and I will \n";
  std::cout << "tell you the letter grade you earned: ";
  std::cin >> testScore;

  // Determine the letter grade
  if (testScore >= MIN_A_SCORE) {
    grade = 'A';
  }
  else if (testScore >= MIN_B_SCORE) {
    grade = 'B';
  }
  else if (testScore >= MIN_C_SCORE) {
    grade = 'C';
  }
  else if (testScore >= MIN_D_SCORE) {
    grade = 'D';
  }
  else if (testScore = 0) {
    grade = 'F';
  }

  // Display the letter grade
  std::cout << "your grade is " << grade << ".\n";

  return 0;
}
