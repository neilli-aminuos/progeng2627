#include <iostream>
#include <cmath>
double sop(double n, int x)
{
    double b = n;
    double sum = 0;
    if (x < 0)
    {
        b = 1 / n;
    }
    for (int i = 1; i <= abs(x); i++)
    {
        sum += std::pow(b, i);
    }
    return sum;
}
int main()
{
    double n;
    int x;
    if (!(std::cin >> n >> x))
    {
        std::cout << "Type error";
    }
    std::cout << sop(n, x);
    return 0;
}