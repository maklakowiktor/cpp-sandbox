#include <iostream>
#include "factorial.h"

int main() 
{
    setlocale(LC_ALL, "");
    int a, b {88};
    a = 301;
    b = 89;
    a = factorial(5);
    std::cout << a << b << std::endl;
    std::cout << "Result: " << a << std::endl;

    return 0;
}