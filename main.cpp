#include <iostream>
#include <memory>

#include "Calculator.h"

int main()
{
	auto calculator = std::make_unique<Calculator>();

	std::cout << calculator->Add(1, 2) << std::endl;
	std::cout << calculator->Substract(1, 2) << std::endl;
	std::cout << calculator->Multiply(1, 2) << std::endl;
	std::cout << calculator->Divide(1, 2) << std::endl;
	std::cout << calculator->Exponent(1, 2) << std::endl;
	std::cout << calculator->Factorial(1) << std::endl;
	std::cout << calculator->SquareRoot(1) << std::endl;
	return 0;
}
