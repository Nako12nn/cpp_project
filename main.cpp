#include <iostream>

double add(double a, double b)
{
    return a + b;
}

double substract(double a, double b)
{
    return a - b;
}

double power(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return (b != 0) ? (a / b) : false;
}

void show_err(void)
{
    std::cout << "You can only use + - * / and numbers" << '\n';
}


int main(void) {
    using std::cout;
    using std::cin;
    using std::endl;

    double a = 0;
    double b = 0;
    char operation;
    double result = 0;

    cin >> a;
    cin >> operation;
    cin >> b;

    if(operation == '/' && not b) {
        cout << "0 zero division error" << '\n';
        return 1;
    }


    switch (operation)
    {
    case '+':
        result = add(a, b);
        break;
    
    case '-':
        result = substract(a, b);
        break;
    
    case '*':
        result = power(a, b);
        break;

    case '/':
        result = divide(a, b);
        break;

    default:
        show_err();
        return 1;
    }

    if(not result) cout << "0 division error" << '\n';
    cout << result << '\n';

    
    return 0;
}