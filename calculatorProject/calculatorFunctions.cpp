#include "calculatorFunctions.h"

#include <iostream>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return (a / b);
}

void show_err()
{
    std::cout << "You can only use + - * / and numbers" << '\n';
}