#include <iostream>
#include "factorial.h"

int main() 
{
    setlocale(LC_ALL, "");
    int a;
    
    a = factorial(5);
    std::cout << "Result: " << a << std::endl;

    return 0;
}