// This program demonstrates how a lack of precision in
// floating-point numbers can make equality comaprisons unreliable.
#include <iostream>

int main() {
  double result = .666667 * 6.0;

  // 2/3 of 6 should be 4, and if you print result, 4 is displayed.
  std::cout << "result = " << result << std::endl;

  // However, internally result is not precisely equal to 4.
  if (result == 4.0) {
    std::cout << "result DOES equal 4!" << std::endl;
  }
  else {
    std::cout << "result DOES NOT equal 4!" << std::endl;
  }

  return 0;
}
