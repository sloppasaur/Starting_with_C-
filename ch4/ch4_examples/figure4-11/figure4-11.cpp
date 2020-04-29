// This program determines wheter a loan applicant qualifies for
// a special loan interest rate. It uses nested if/else statements.
#include <iostream>

int main()
{
  char employed = ' ',
       recentGrad = ' ';

  // Is the applicant employed and a recent college graduate?
  std::cout << "Answer the followign questions\n";
  std::cout << "with either Y for Yes or N for No." << std::endl;

  std::cout << "Are you employed? ";
  std::cin >> employed;

  std::cout << "Have you graduated from college in the past two years? ";
  std::cin >> recentGrad;

  // Determine the applicants' loan qualifications
  if (employed == 'Y' || employed == 'y')
  {
    if (recentGrad == 'Y' || recentGrad == 'y')
    {
      std::cout << "You qualify for the special interest rate." << std::endl;
    }
    else
    {
      std::cout << "You must have graduated from college in the past\n";
      std::cout << "two years to qualify for the special interest rate."
                << std::endl;
    }
  }
  else {
    std::cout << "You must be employed to qualify for the "
              << "special interest rate." << std::endl;
  }

  return 0;
}
