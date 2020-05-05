// This program calculate sthe number of soccer teams a
// youth league can create from the number of available
// players. It performs input validation useing while loops.
#include <iostream>

int main()
{
    // Constants for minimum and maximum and maximum per team
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 18;

    // Variables
    int players = 0,        // Number of available players
        teamSize = 0,      // Number of desired players per team
        numTeams = 0,       // Number of teams
        leftOver = 0;       // Number of players left over.

    // Get the number of players per team
    std::cout << "How many players do you wisher per team?\n";
    std::cout << "(Enter a value in the range "
              << MIN_PLAYERS << " - " << MAX_PLAYERS << ": ";
    std::cin >> teamSize;

    // Validate the input
    while (teamSize < MIN_PLAYERS || teamSize > MAX_PLAYERS)
    {
        std::cout << "\nTeam size should be "
                  << MIN_PLAYERS << " - " << MAX_PLAYERS << "players.\n";
        std::cout << "How many players do wish per team? ";
        std::cin >> teamSize;
    }

    // Get and validate the number of players available
    std::cout << "\nHow many players are available? ";
    std::cin >> players;

    while (players <= 0)
    {
        std::cout << "Please enter a positive number: ";
        std::cin >> players;
    }

    // Calculate the number of teams and numer of leftover players.
    numTeams = players / teamSize;
    leftOver = players % teamSize;

    // Display the results
    std::cout << "\nThere will be " << numTeams << " teams with ";
    std::cout << leftOver << " players left over.\n";

    return 0;
}
