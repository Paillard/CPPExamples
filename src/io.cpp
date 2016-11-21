// basic input/output manipulations
#include <iostream>
#include <string>
#include <sstream>

/*
stream  description
cin	    standard input stream
cout	  standard output stream
cerr	  standard error (output) stream
clog	  standard logging (output) stream
*/

int main()
{
  // standard output
  int age (27), zipcode (75000);
  std::cout << "I am " << age << "years old and my zipcode is " << zipcode << std::endl;

  // standard input
  int yourAge;
  int yourZipcode;
  std::cout << "Please enter your age, then your zipcode" << std::endl;
  std::cin >> yourAge >> yourZipcode;
  std::cout << "You are " << yourAge << " old, and your zipcode is " << yourZipcode << std::endl;

  // ... with strings!
  std::string mystr;
  getline(std::cin, mystr); // necessary to avoid unwanted behavior
  std::cout << "What's your name? ";
  getline(std::cin, mystr);
  std::cout << "Hello " << mystr << ".\n";
  std::cout << "What is your favorite team? ";
  getline(std::cin, mystr);
  std::cout << "I like " << mystr << " too!\n";

  // stringsstream
  float price (0);
  int quantity (0);

  std::cout << "Enter price: ";
  getline(std::cin, mystr);
  std::stringstream(mystr) >> price;
  std::cout << "Enter quantity: ";
  getline(std::cin, mystr);
  std::stringstream(mystr) >> quantity;
  std::cout << "Total price: " << price * quantity << std::endl;

  return 0;
}
