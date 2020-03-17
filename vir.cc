#include <iostream>
class A{
public:
    virtual ~A(){ std::cout << "A::~A()"; };
    void fun(){
        std::cout << "A::func " <<std::endl;
    }
};
class B : public A{
public:
    ~B() {std::cout << "B::~B()"; };
    void fun(){
        std::cout << "B::func " <<std::endl;
    }
};

void testfun(A* pa){
    pa->fun();
}
int main()
{
    A* pa = new A;
    B* pb = new B;
    testfun(pa);
    testfun(pb);
    delete pa;
    delete pb;
    return 0;
}

