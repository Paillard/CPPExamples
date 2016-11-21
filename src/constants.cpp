#include <iostream>

// preprocessor definitions
/*
** Replaced everywhere before compilation
*/
#define PI 3.14159
#define NEWLINE '\n'

int main()
{
  // literals
  int a = 5; // 5 is a literal constant
  (void)a;

  // number literals = Numerals
  // they're all the same.
  std::cout << 75 << std::endl;   // decimal
  std::cout << 0113 << std::endl; // octal
  std::cout << 0x4b << std::endl; // hexadecimal
  // integer type literals
  std::cout << 75 << std::endl;   // int
  std::cout << 75u << std::endl;  // unsigned int
  std::cout << 75l << std::endl;  // long
  std::cout << 75UL << std::endl; // unsigned long
  // Floating Point Numerals
  std::cout << 3.14159 << std::endl;  // part of PI as a double
  std::cout << 6.02e23 << std::endl;  // 6.02 x 10^23 (Avogadro)
  std::cout << 1.6E-199 << std::endl; // 1.6 x 10^-19 (electric charge of an electron)
  std::cout << 3.0 << std::endl;      // 3.0
  std::cout << 3.14159L << std::endl;  // long double
  std::cout << 6.02e23F << std::endl;  // float
  // Character and strings literals
  std::cout << 'z' << std::endl;  // char 'z'
  std::cout << '\n' << std::endl; // newline
  std::cout << '\r' << std::endl; // carriage return
  std::cout << '\t' << std::endl; // tab
  std::cout << '\v' << std::endl; // vertical tav
  std::cout << '\b' << std::endl; // backspace
  std::cout << '\f' << std::endl; //form feed (page feed)
  std::cout << '\a' << std::endl; // alert (beep)
  std::cout << '\'' << std::endl; // single quote
  std::cout << '\"' << std::endl; // double quote
  std::cout << '\?' << std::endl; // question mark
  std::cout << '\\' << std::endl; // backslash
  std::cout << "?" << std::endl; // question mark
  std::cout << "a""\x20""b""\x4A" << std::endl; // using hexadecimal for ASCII char
  std::cout << "this is a one\
 line message" << std::endl; // compiler tricks
  std::cout << "this"    " is "
  "a"     " single s" "tring" << std::endl;
  std::cout << u'z' << std::endl; // char16_t
  std::cout << U'z' << std::endl; // char32_t
  std::cout << L'z' << std::endl; // wchar_t
  std::cout << u8"lol" << std::endl; // The string literal is encoded in the executable using UTF-8
  std::cout << R"(string with \backslash)" << std::endl; // The string literal is a raw string
  std::cout << R"&%(string with \backslash)&%" << std::endl;
  // other
  std::cout << true << std::endl;
  std::cout << false << std::endl;
  int* p (nullptr);
  (void)p;

  // usin preprocessor definitions
  std::cout << PI << NEWLINE << std::endl;

  return 0;
}
