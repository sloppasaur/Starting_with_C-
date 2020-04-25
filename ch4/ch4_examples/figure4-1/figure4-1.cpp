// A program to calculate the area of a rectangle

#include <iostream>

// main
int main() {
  double length = 0, width = 0, area = 0;

  std::cout << "Enter the length of the rectangle: ";
  std::cin >> length;

  std::cout << "Enter the width of the rectangle: ";
  std::cin >> width;

  area = length * width;

  std::cout << "The area is : " << area << std::endl;
  return 0;
}
