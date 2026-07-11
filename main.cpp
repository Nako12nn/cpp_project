#include <iostream>

int main(void) {

    char storage[] = "Establish";
    unsigned int number = 3000000000;
    float point_num = 3.1415962535;

    std::cout << "Before: " << '\n' << storage << '\n' << number << '\n' << point_num << '\n';
    std::cout << "----------------" << '\n';

    std::cout << "Enter new variables: " << '\n';

    std::cin >> storage; // it reads only to the first space
    std::cin >> number;
    std::cin >> point_num;

    std::cout << "----------------" << '\n';

    std::cout << "After: " << '\n';

    std::cout << storage << '\n';
    std::cout << number << '\n';
    std::cout << point_num << '\n';

    std::cout << "----------------" << '\n';

    return 0;
}