#include <string>

#include "complex.hpp"

Complex::Complex(double r, double i)
{
  real = r;
  imag = i;
}

std::string Complex::pp()
{
	if (imag < 0) {
		return std::to_string(real) + " - " + std::to_string(-imag) + "i";
	}
	else {
		return std::to_string(real) + " + " + std::to_string(imag) + "i";
	}
}


double Complex::getReal()
{
  return real;
}

double Complex::getImag()
{
  return imag;
}

Complex Complex::add(Complex n)
{
  double real_sum = real + n.getReal();
  double imag_sum = imag + n.getImag();
  return Complex(real_sum, imag_sum);
}

Complex Complex::subtact(Complex n)
{
	double real_dif = real - n.getReal();
	double imag_dif = imag - n.getImag();
	return Complex(real_dif, imag_dif);
}

Complex Complex::multiply(Complex n)
{
	double real_mult = real * n.getReal() - imag * n.getImag();
	double imag_mult = real * n.getImag() + imag * n.getReal();
	return Complex(real_mult, imag_mult);
}

Complex Complex::negate()
{
	double real_neg = real * -1;
	double imag_neg = imag * -1;
	return Complex(real_neg, imag_neg);
}

double Complex::magnitude()
{
	double mag = sqrt(pow(real, 2) + pow(imag, 2));
	return mag;
}

Complex Complex::conjugate()
{
	double imag_con = imag * -1;
	return Complex(real, imag_con);
}

