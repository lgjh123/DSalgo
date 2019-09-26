#include <iostream>
int cal(int n)
{
    int sum = 0;
    int i = 1;
    for( ; i <= n; ++i )
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    std::cout << cal(4) << std::endl;
    return 0;
}

