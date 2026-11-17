#include <iostream>
#include <vector>
int main()
{
    int n;
    if (!(std::cin >> n))
    {
        std::cout << "Type error";
        return 0;
    }
    std::vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        std::cin >> j;
        v.push_back(j);
    }
    int t;
    std::cin >> t;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (v.at(i) < t)
        {
            std::cout << v.at(i) << std::endl;
            num++;
        }
    }
    if (num == 0)
    {
        std::cout << "No value in the vector is less than " << t;
    }
    return 0;
}