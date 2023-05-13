#pragma once

class Calculator
{
public:
	template<typename T> T Add(T a, T b);
	template<typename T> T Substract (T a, T b);
	template<typename T> T Multiply(T a, T b);
	template<typename T> T Divide(T a, T b);
	template<typename T> T Exponent(T a, T b);
	template<typename T> T Factorial(T a);
	template<typename T> T SquareRoot(T a);
};

