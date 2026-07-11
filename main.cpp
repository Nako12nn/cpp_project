#include <iostream>

namespace Lokal_space { //for creation own napespaces
void print_woof(void)
{
    std::cout << "Lokal_space --- woof-woof" << std::endl;
}

namespace Arguments {
    int salary_may = 5500;
}
}

void print_woof(void)
{
    std::cout << "woof-woof" << std::endl;
}


int salary_may = 3400;

namespace Lokal_space {
void show_option(void)
{
    std::cout << "1. get metasploit" << std::endl;
    std::cout << "2. remove nikto" << std::endl;

}
}

int main(void) {


    int salary_may = 1200;
    std::cout << salary_may << std::endl; // lokal var

    std::cout << ::salary_may << std::endl; // global var - use :: for it

    Lokal_space::print_woof();

    print_woof(); // ordinary
    
    std::cout << Lokal_space::Arguments::salary_may << std::endl;

    return 0;
}