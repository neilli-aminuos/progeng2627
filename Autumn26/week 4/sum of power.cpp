#include <iostream>
#include <cmath>
double sop(double a, int b)
{
    double sum = 0;
    for (int i = 1; i <= b; i++)
    {
        sum += std::pow(a, i);
    }
    return sum;
}
int main()
{
    double n;
    int i;
    if (!(std::cin >> n >> i))
    {
        std::cout << "Type error";
    }
    std::cout << sop(n, i);
    return 0;
}