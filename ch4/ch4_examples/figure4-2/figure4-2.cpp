// This program correctly averages 3 test scores
#include <iostream>
#include <iomanip>

int main() {

  int score1 = 0, score2 = 0, score3 = 0;
  double average = 0.0;

  // Get the three test scores
  std::cout << "Enter the 3 test scores and I will avere them: ";
  std::cin >> score1 >> score2 >> score3;

  // Calculate and display the average score
  average = (score1 + score2 + score3) / 3.0;
  std::cout << std::fixed << std::showpoint << std::setprecision(1);
  std::cout << "Your average is " << average << std::endl;

  // if the average equals 100, congratulate the user
  if (average == 100) {
    std::cout << "Congratulations!" << std::endl;
    std::cout << "That's a perfect score!!!" << std::endl;
  }

  return 0;

}
