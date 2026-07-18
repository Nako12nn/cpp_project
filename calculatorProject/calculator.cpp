#include <iostream>
#include <limits> // lib for clear and ignore
//#include "calculatorFunctions.h"

double get_number()
{
    double number = 0;
    while (!(std::cin >> number))
    {
        std::cout << "Error, enter correct numeric value" << '\n';
        std::cin.clear(); // clear console from error 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove incorrect value from variable
    }
    return number;
}


char get_operation_sign()
{
    char operation;
    std::cin >> operation;
    while(!(operation == '+' || operation == '-' || 
            operation == '*' || operation == '/')) {
        std::cout << "Enter correct operation sign" << '\n';
        std::cin.clear(); // clear console from error 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> operation;
    }
    return operation;
}


double get_result(double left_operand, char operation, double right_operand)
{
    double result = 0;
    
    if(operation == '+')
        result = left_operand + right_operand;

    if(operation == '-')
        result = left_operand - right_operand;

    if(operation == '*')
        result = left_operand * right_operand;

    if(operation == '/')
        result = left_operand / right_operand;

    return result;
}


void print_result(double result)
{
    std::cout << result << '\n';
}


int check_zero_division_error(char operation, double right_operand)
{
    if(operation == '/' && right_operand == 0)
        return 1;

    return 0;
}

int main() {

    double left_operand = get_number();
    char operation = get_operation_sign();
    double right_operand = get_number();

    if(check_zero_division_error(operation, right_operand)) {
        std::cout << "Undefined" << '\n';
        return 0;
    }

    double result = get_result(left_operand, operation, right_operand);

    print_result(result);
    
    return 0;
}