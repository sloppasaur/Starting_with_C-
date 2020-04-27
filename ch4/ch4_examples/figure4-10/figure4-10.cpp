// This menu-driven program uses an if/else statement to carry
// out the correct set of actions based on the user's menu choice.

#include <iostream>
#include <iomanip>

int main() {
  // Constants for membership rates
  const double ADULT_RATE = 120.0;
  const double CHILD_RATE = 60.0;
  const double SENIOR_RATE = 100.0;

  int choice = 0; // Menu choice
  int months = 0; // Number of months
  double charges = 0.0; // Monthly charges

  // Displaythe menu and get the user's choice
  std::cout << "   HEALTH CLUB MEMBERSHIP MENU" << std::endl;
  std::cout << "1. STANDARD ADULT MEMBERSHIP" << std::endl;
  std::cout << "2. CHILD MEMBERSHIP" << std::endl;
  std::cout << "3. SENIOR CITIZEN MEMBERSHIP" << std::endl;
  std::cout << "4. QUIT" << std::endl;
  std::cout << "ENTER YOUR CHOICE -->";
  std::cin >> choice;

  // Set the numeric output formatting
  std::cout << std::fixed << std::showpoint << std::setprecision(2);

  // Use the menu selection to execute the correct set of actions
  if (choice == 1) {
    std::cout << "FOR HOW MANY MONTHS: ";
    std::cin >> months;
    charges = months * ADULT_RATE;
    std::cout << "TOTAL: " << charges << std::endl;
  }
  else if (choice == 2) {
    std::cout << "FOR HOW MANY MONTHS: ";
    std::cin >> months;
    charges = months * CHILD_RATE;
    std::cout << "TOTAL: " << charges << std::endl;
  }
  else if (choice == 3) {
    std::cout << "FOR HOW MANY MONTHS: ";
    std::cin >> months;
    charges = months * SENIOR_RATE;
    std::cout << "TOTAL: " << charges << std::endl;
  }
  else if (choice != 4) {
    std::cout << "ERROR!" << std::endl;
    std::cout << "ONLY 1-4 ARE VALID." << std::endl;
    std::cout << "ENTER YOUR CHOICE: ";
    std::cin >> choice;
  }
  else {
    std::cout << "HAVE A GOOD DAY." << std::endl;
  }

  return 0;
}
