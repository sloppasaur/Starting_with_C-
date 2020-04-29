// This program determines wheter a loan applicant qualifies for
// a special loan interest rate. It uses the && operator.
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

    // Determine the applicant's loan qualifications
    if ((employed == 'Y' || employed == 'y') &&
        (recentGrad == 'Y' || recentGrad == 'y'))
    {
        std:: cout << "\nYou qualify for the special interest rate!"
                    << std::endl;
    }
    else
    {
        std::cout << "\nYou must be employed and have graduated from college\n"
                    << "in the past two years to qualify"
                    << "for the special interest rate." << std::endl;
    }

    return 0;
}
