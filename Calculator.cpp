#include <stdexcept>
#include "Calculator.h"

template<typename T>
T Calculator::Add(T a, T b)
{
	return a + b;
}

template<typename T>
T Calculator::Substract(T a, T b)
{
	return a - b;
}

template<typename T>
T Calculator::Multiply(T a, T b)
{
	if (a == 0 || b == 0)
		return 0;

	return a * b;
}

template<typename T>
T Calculator::Divide(T a, T b)
{
	if (b == 0)
		throw std::logic_error("Division by zero exception");
	return a / b;
}

template<typename T>
T Calculator::Exponent(T a, T b)
{
	if (b == 0)
		return 1;
	else if (b < 0)
		return 1 / (a * Exponent(a, -b - 1));
	else
		return a * Exponent(a, b - 1);
}

template<typename T>
T Calculator::Factorial(T a)
{
	int result{ 1 };

	for (int i = 1; i <= a; i++)
		result *= i;

	return result;
}

template<typename T>
T Calculator::SquareRoot(T a)
{
	if (a == 0)
		return 0;
	if (a < 0)
		throw std::logic_error("Square root of negative number exception");

	for (int i = 1; i <= a; i++)
		if (i * i == a)
			return i;
}
