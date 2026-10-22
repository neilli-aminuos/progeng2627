#include <iostream>
bool leap_year(int year)
{
    bool ly;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return 1;
            }
            return 0;
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    if (leap_year(input_year))
    {
        std::cout << "it's a leap year" << std::endl;
    }
    else
    {
        std::cout << "it's not a leap year" << std::endl;
    }
}