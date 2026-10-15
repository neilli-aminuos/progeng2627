#include <iostream>

bool prime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int n;
    std::cin >> n;
    if (prime(n) == 0)
    {
        std::cout << "this number is not prime";
    }
    else
    {
        std::cout << "this number is prime";
    }
}