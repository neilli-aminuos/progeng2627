#include <iostream>
int comp(int a1, int a2)
{
    if (a1 > a2)
    {
        return a1;
    }
    return a2;
}
int main()
{
    int a1, a2;
    if (!(std::cin >> a1 >> a2))
    {
        std::cout << "Type error";
    }
    std::cout << comp(a1, a2);

    return 0;
}