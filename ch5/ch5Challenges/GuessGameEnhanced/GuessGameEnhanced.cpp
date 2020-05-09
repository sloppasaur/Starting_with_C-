// Nathaniel Barrera
// Write a program that generates a random number between
// 1 and 100 and asks the user to guess what the number is.
// The program should say whether or not the guess is higher
// or lower than the random number.
#include <iostream>
#include <stdio.h>      // For Null
#include <stdlib.h>     // for randoms
#include <time.h>       // For seed

int main()
{
    std::srand (time(NULL));

    int secret = std::rand() % 100 + 1,     // random number
        guess = 0,                          // user's guess
        counter = 0;                        // counts guesses

    std::cout << "I have a number in my head from 1 to 100...\n";
    std::cout << "Can you guess what it is?" << std::endl;

    do
    {
        std::cout << "Take a guess! ";
        std::cin >> guess;

        if (guess > secret)
        {
            std::cout << "That's too high! Try again!\n";
        }
        if (guess < secret)
        {
            std::cout << "That's too low! Try again!\n";
        }
        counter++;
    } while (guess != secret);

    std::cout << "Congratulations! You got the number!\n";
    if (counter == 1)       // If it takes only one guess.
    {
        std::cout << "Wow! It took you only 1 guess to"
                  << "Figure out my number! You must be"
                  << "Good!\n";
    }
    else
    {
        std::cout << "It took you " << counter << " guesses "
                  << "to find my number!\n";
    }
    std::cout << "Thanks for playing!" << std::endl;

    return 0;
}
