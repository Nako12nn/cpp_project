#include <iostream>
#include "calculatorFunctions.h"

#if 0
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
#endif


int main() {

    double a = 0;
    char operation;
    double b = 0;
    double result = 0;

    std::cin >> a;
    std::cin >> operation;
    std::cin >> b;

    if(operation == '/' && b == 0.0) {
        std::cout << "0 zero division error" << '\n';
        return 1;
    }


    switch (operation)
    {
    case '+':
        result = add(a, b);
        break;
    
    case '-':
        result = subtract(a, b);
        break;
    
    case '*':
        result = multiply(a, b);
        break;

    case '/':
        result = divide(a, b);
        break;

    default:
        show_err();
        return 1;
    }

    std::cout << result << '\n';
    
    return 0;
}