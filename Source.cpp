#include <windows.h>
#include <iostream>

struct ComplexNumber {
	double real;
	double imag;
};

struct PolarForm {
	double radius;
	double angle;
};

PolarForm convertToPolar(const ComplexNumber& z) {
	PolarForm result;
	result.radius = std::sqrt(z.real * z.real + z.imag * z.imag);
	result.angle = std::atan2(z.imag, z.real);
	return result;
}

int main() {
	ComplexNumber z;
	std::cout << "Enter the real part of the complex number: ";
	std::cin >> z.real;
	std::cout << "Enter the imaginary part of the complex number: ";
	std::cin >> z.imag;
	PolarForm polar = convertToPolar(z);

	std::cout << "Trigonometric form:" << std::endl;
	std::cout << "r = " << polar.radius << std::endl;
	std::cout << "θ = " << polar.angle << " radians" << std::endl;
	std::cout << "z = " << polar.radius << "(cos(" << polar.angle << ") + i*sin(" << polar.angle << "))" << std::endl;

	return 0;


}