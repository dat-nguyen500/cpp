#include <iostream>
#include "ch2_p4.h"

void task()
{
    int a, b, c;
    std::cout << "Enter the time duration of a task in the number of hours, minutes, and seconds" << std::endl;
    std::cin >> a >> b >> c;

    int total_seconds = a * 3600 + b * 60 + c;
    std::cout << "The total time duration of the task in seconds is " << total_seconds << std::endl;
}