#include <iostream>
#include "Header.h"

int main()
{
    Count countind;

    bool count = true;

    std::cout << "Enter 1 to increment by 1 > " << std::endl;
    std::cout << "Enter 2 to quit" << std::endl;

    do
    {
        int option;
        std::cout << "Enter your option" << std::endl;
        std::cin >> option;

        if (option == 1)
        {
            countind.count();
        }
        else
        {
            count = false;
        }

    } while (count == true);
}