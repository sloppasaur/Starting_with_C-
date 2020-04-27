// This program uses the modulus operator to determine
// if a number is odd or even. If the number is evenly divisible
// by 2, it is an even number. A remainder indicated it is odd.
#include <iostream>

int main() {
  int number = 0;

  std::cout << "Enter an integer and I will tell you if it ";
  std::cout << "is odd or even: ";
  std::cin >> number;

  if (number % 2 == 0) {
    std::cout << number << " is even." << std::endl;
  }
  else {
    std::cout << number << " is odd." << std::endl;
  }
}
