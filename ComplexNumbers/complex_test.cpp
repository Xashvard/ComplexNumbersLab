#include <cassert>
#include <iostream>

#include "complex.hpp"

int main()
{
  Complex a(4, 5);
  Complex b(6, 7);
  Complex c = a.add(b);
  Complex d = b.subtact(a);
  Complex e = a.negate();
  double f = a.magnitude();
  Complex g = a.conjugate();

  std::cout << "Starting the tests!" << std::endl;
  assert(a.getReal() == 4);
  assert(b.getImag() == 7);
  assert(c.getReal() == 10);
  assert(c.getImag() == 12);
  assert(d.getReal() == 2);
  assert(d.getImag() == 2);
  assert(e.getReal() == -4);
  assert(e.getImag() == -5);
  assert(f == sqrt(41));
  assert(g.getReal() == 4);
  assert(g.getImag() == -5);
  std::cout << "All of the tests passed!" << std::endl;
}
