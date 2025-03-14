#include <iostream>
#include <string>
#include "ch2_p2.h"

void printA()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}