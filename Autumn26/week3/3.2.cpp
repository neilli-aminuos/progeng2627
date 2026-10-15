#include <iostream>
int isqrt(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i * i > n)
        {
            return i - 1;
        }
        else if (i * i == n)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n = 0;
    std::cout << "please enter a number" << std::endl;
    if (!(std::cin >> n))
    {
        std::cout << "type error";
        return 0;
    }
    if (n <= 2)
    {
        std::cout << "enter a number greater than two you idiot";
        return 0;
    }
    int a[1001] = {0}, j = 0;
    int m = n;
    while (m > 1)
    {
        for (int i = 2; i <= isqrt(m); i++)
        {
            if (n % i == 0)
            {
                a[j] = i;
                j += 1;
                m = m / i;
            }
        }
        if (m == 1)
        {
            break;
        }
        else
        {
            a[j] = m;
            break;
        }
    }
    std::cout << "this number has" << j << "factorials" << std::endl;
    std::cout << "1\t";
    for (int i = 0; i <= j; i++)
    {
        std::cout << a[i] << "\t";
    }
    return 0;
}