#include <iostream>
#include <vector>
// this header is needed to use vectors

int main()
{
    std::vector<int> v;
    int a, b, c;
    if (!(std::cin >> a >> b >> c))
    {
        std::cout << "Type error";
    }
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    std::cout << v[0] * (v[1] + v[2]);
}