#include <iostream>

#include "complex.hpp"

using namespace std;

int main()
{
  std::cout << "Hello and welcome to the driver program!" << std::endl;
  std::cout << "Please enter a complex number separated by spaces" << std::endl;

  double real_one, imag_one;
  std::cin >> real_one >> imag_one;

  std::cout << "Please enter another complex number separated by spaces" << std::endl;

  double real_two, imag_two;
  std::cin >> real_two >> imag_two;

  Complex a(real_one, imag_one);
  Complex b(real_two, imag_two);
  std::cout << "The first number is: " << a.pp() << std::endl << std::endl;

  std::cout << "The second number is: " << b.pp() << std::endl << std::endl;

  std::cout << "Their sum is: " << a.add(b).pp() << std::endl << std::endl;

  std::cout << "Their difference is: " << a.subtact(b).pp() << std::endl << std::endl;

  std::cout << "your complex numbers negated are: " << std::endl << std::endl << "1: " << a.negate().pp() << std::endl << "2: " << b.negate().pp() << std::endl << std::endl;

  std::cout << "The magnitude of your complex numbers are: " << std::endl << std::endl << "1: " << a.magnitude() << std::endl << "2: " << b.magnitude() << std::endl << std::endl;

  std::cout << "The conjugation of your complex numbers are: " << std::endl << std::endl << "1: " << a.conjugate().pp() << std::endl << "2: " << b.conjugate().pp() << std::endl << std::endl;

  std::cout << "Goodbye!" << std::endl;

  return 0;
}
