#include <iostream>
int main()
{
    int n;
    if (!(std::cin >> n))
    {
        std::cout << "type error";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << j * i << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}