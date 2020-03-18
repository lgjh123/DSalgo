#include <iostream>
#include <bitset>
void test1(){
    uint16_t a = 2;
    uint16_t *pa =&a;
    uint32_t* pb = reinterpret_cast<uint32_t*>(pa);
    // uint16_t* pb = (uint16_t*)(pa);
    //uint16_t* pb = static_cast<uint16_t*>(pa);
    
    std::cout <<"pa指向的地址:"<< std::hex<< pa <<std::endl;
    std::cout <<"pb指向的地址:"<< std::hex << pb <<std::endl;
    std::cout <<"*pa的二进制:"<< std::bitset<32>(*pa) <<std::endl;
    std::cout <<"*pb的二进制"<< std::bitset<32>(*pb) <<std::endl;

}
void test2(){
    int num = 0x00636261;
    int *pnum = &num;
    char *pstr = reinterpret_cast<char*> (pnum);
    std::cout <<"pnum指针的值:" << pnum << std::endl;
    std::cout <<"pstr指针的值:" << static_cast<void*>(pstr) << std::endl;
    std::cout <<"pnum指向的内容:" << std::hex << *pnum<<std::endl;
    std::cout <<"pstr指向的内容:" << pstr << std::endl;
}
void test3(){
    int a = 1;
    int *pa = reinterpret_cast<int*>(a);
    std::cout <<"int a的16进制:"<< std::hex<< a <<std::endl;
    std::cout <<"int *pa指向的地址:"<< std::hex << pa <<std::endl;
    std::cout <<"a的二进制:"<< std::bitset<32>(a) <<std::endl;
    std::cout <<"*pa的二进制"<< std::bitset<32>(pa) <<std::endl;    //segmentation fault


}
int main()
{
    //test1();
    //test2();
    test3();
    return 0;
}


