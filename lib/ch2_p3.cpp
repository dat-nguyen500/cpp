#include <iostream>
#include "ch2_p3.h"

void printH()
{
    int n = 3;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            if (j == 1 || j == n + 1)
            {
                std::cout << "H";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    for (int i = 1; i <= n + 1; i++)
    {
        std::cout << "H";
    }
    std::cout << std::endl;
    

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            if (j == 1 || j == n + 1)
            {
                std::cout << "H";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}