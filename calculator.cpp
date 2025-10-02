#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b;
}

// My custom changes for lab work
// Added comments and minor improvements
// This part of the code was modified manually

int Calculator::Sub (double a, double b)

{
	return Add (a, -b);

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
