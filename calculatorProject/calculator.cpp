#include <iostream>
#include <limits>
//#include "calculatorFunctions.h"

double get_number()
{
    double number = 0;
    while (!(std::cin >> number))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return number;
}


char get_operation_sign()
{
    char operation;
    std::cin >> operation;
    
    return operation;
}


int check_operation_sign(char operation)
{
    if(operation == '+' || operation == '-' || 
       operation == '*' || operation == '/')
        return true;
    else
        return false;
}


void print_zero_division_err()
{
    std::cout << "0 zero division error" << '\n';
}


void print_result(double a, double operation, char b)
{
    if(operation == '+')
        std::cout << a + b << '\n';

    else if(operation == '-')
        std::cout << a - b << '\n';

    else if(operation == '*')
        std::cout << a * b << '\n';

    else if(operation == '/')
        std::cout << a / b << '\n';        
    
    else 
        return;

}

int main() {

    double a = get_number();
    char operation = get_operation_sign();
    double b = get_number();


    if(!(check_operation_sign(operation))) {
        std::cout << "Error sign" << '\n';
        return 1;
    }


    if(operation == '/' && b == 0.0) {
        print_zero_division_err();
        return 1;
    }
    
    std::cout << "main works" << '\n';

    print_result(a, operation, b);
    
    return 0;
}