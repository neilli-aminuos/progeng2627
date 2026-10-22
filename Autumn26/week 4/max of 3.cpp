#include <iostream>
int comp(int a1, int a2, int a3)
{
    if (a1 > a2)
    {
        if (a1 > a3)
        {
            return a1;
        }
        return a3;
    }
    if (a2 > a3)
    {
        return a2;
    }
    return a3;
}
int main()
{
    int a1, a2, a3;
    if (!(std::cin >> a1 >> a2 >> a3))
    {
        std::cout << "Type error";
    }
    std::cout << comp(a1, a2, a3);

    return 0;
}