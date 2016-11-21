// playing around with operators
#include <iostream>

int main()
{
  // assignement
  int a, b;   // a: ?, b: ?
  a = 10;     // a: 10, b: ?
  b = 4;      // a: 10, b: 4
  a = b;      // a: 4, b: 4
  b = 7;      // a: 4, b: 7
  std::cout << "a: " << a << "\nb: " << b << std::endl;

  int x;
  int y = 2 + (x = 5);
  int v, w, z;
  v = w = z = y; // right to left
  std::cout <<  "v: " << v << "\n"
                "w: " << w << "\n"
                "x: " << x << "\n"
                "y: " << y << "\n"
                "z: " << z << std::endl;

  // arithmetic operators
  /*
  ** basics
  **
  ** + addition
  ** - substraction
  ** * multiplication
  ** / division
  ** % modulo

  ** compounds
  +=, -=, *=, /=, %=
  >>= right bit shift
  <<= letf bit shift
  &= bit and
  ^= bit xor
  |= bit or
  ~= bit not?
  */

  // pre-incrementation
  int xxx (3);
  int yyy (++xxx);
  std::cout << "xxx: " << xxx << "\nyyy: " << yyy << std::endl;

  // post-incrementation
  int xx (3);
  int yy (xx++);
  std::cout << "xx: " << xx << "\nyy: " << yy << std::endl;

  /*
  ** Relational and comparison
  ** ==
  ** !=
  ** <
  ** >
  ** <=
  ** >=

  ** Logical operators
  ** !  not
  ** && AND
  ** || OR

  ** conditional ternary
  ** ?
  */
  int r (12);
  r < 10 ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

  // comma
  int d;
  int e = (d = 3, d + 2);
  std::cout << e << std::endl;

  /*
  ** Bitwise operators
  &	AND	Bitwise AND
  |	OR	Bitwise inclusive OR
  ^	XOR	Bitwise exclusive OR
  ~	NOT	Unary complement (bit inversion)
  <<	SHL	Shift bits left
  >>	SHR	Shift bits right
  */

  // Explicit type cast
  int i, j;
  float f (3.14);
  i = (int) f;
  j = int (f);
  (void)i;
  (void)j;

  std::cout << sizeof(char) << std::endl; // compile time

  return 0;
}
