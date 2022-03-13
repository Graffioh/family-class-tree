#pragma once

#include <iostream>
#include <string>
#include <limits>

template<typename T>
void getInput(T& input, const std::string msg)
{
    std::cout << msg << std::endl;
    std::cin >> input;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input error,please try again\n";

        std::cout << msg << std::endl;
        std::cin >> input;
    }
}