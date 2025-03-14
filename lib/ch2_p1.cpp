#include <iostream>
#include <string>
#include "ch2_p1.h"
std::string printAsterisk(int n)
{
    return std::string(n, '*');
}

void printA()
{
    for (int i = 1; i <= 3; i++)
    {
        std::cout << printAsterisk(i) << std::endl;
    }
}