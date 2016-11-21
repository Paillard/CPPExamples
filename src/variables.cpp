// operations with variables
#include <iostream>
#include <string>

int main()
{
  // declaring variables
  int a = 0;      // c-like initialization
  int b (0);      // constructor initialization
  int result {0}; // uniform initialization

  int foo (0);
  auto bar (foo); // compiler will determine bar's type
  decltype(foo) baar;
  decltype(foo) baar2 (5);

  // simulate use
  (void)bar;
  (void)baar;
  // actual use
  std::cout << baar2 << std::endl;

  // process
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;

  // print the result
  std::cout << result << std::endl;

  // using strings
  std::string oneString ("So this is what a string looks like");

  std::cout << oneString << std::endl;
  // terminate the program
  return 0;
}
