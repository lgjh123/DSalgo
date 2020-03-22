#include <iostream>

int main()
{
    int i = 0x61626364;
    int *pi=&i;
    char*c =reinterpret_cast<char*>(pi);
    std::cout << *c << std::endl;
    return 0;
}

