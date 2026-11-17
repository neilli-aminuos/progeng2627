#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int n;
    std::cout << "please enter n:" << std::endl;
    if (!(std::cin >> n))
    {
        std::cout << "Type error";
    }
    for (int i = 1; i <= n; i++)
    {
        std::cout << "please enter a number:" << std::endl;
        int j = 0;
        std::cin >> j;
        v.push_back(j);
    }
    int s = 0, num = 0;
    std::vector<int> in;
    std::cout << "please enter s:" << std::endl;
    std::cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (v.at(i) == s)
        {
            num++;
            in.push_back(i);
        }
    }
    if (num != 0)
    {
        std::cout << "there are " << num << " occurrences of " << s << " at indices:"<<std::endl;
        for(int i = 0; i < in.size(); i++){
            std::cout<< in.at(i) << std::endl;
        }
    }
    else
    {
        std::cout << "there are no occurrences of " << s;
    }
    return 0;
}