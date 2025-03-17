#pragma once

#include <string>

class Complex
{
private:
  double real;
  double imag;

public:
  Complex(double a, double b);
  double getReal();
  double getImag();
  std::string pp();
  Complex add(Complex n);
  Complex subtact(Complex n);
  Complex multiply(Complex n);
  Complex negate();
  double magnitude();
  Complex conjugate();
};
