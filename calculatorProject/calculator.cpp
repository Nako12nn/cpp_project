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
        std::cin >> operation;
    }
    return operation;
}


void print_result(double left_operand, char operation, double right_operand)
{
    if(operation == '+')
        std::cout << left_operand + right_operand << '\n';

    else if(operation == '-')
        std::cout << left_operand - right_operand << '\n';

    else if(operation == '*')
        std::cout << left_operand * right_operand << '\n';

    else if(operation == '/')
        std::cout << left_operand / right_operand << '\n';        
}


int check_zero_division_error(char operation, double right_operand)
{
    if(operation == '/' && right_operand == 0)
        return 1;

    else 
    {
        return 0;
    }
}

int main() {

    double left_operand = get_number();
    char operation = get_operation_sign();
    double right_operand = get_number();

    if(check_zero_division_error(operation, right_operand)) {
        std::cout << "Undefined" << '\n';
        return 1;
    }
    print_result(left_operand, operation, right_operand);
    
    return 0;
}