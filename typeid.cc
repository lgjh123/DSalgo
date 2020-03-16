//RTTI Runtime Type Information
#include <typeinfo>
#include <iostream>
using namespace std;
namespace lee1{
void test1()
{
    int a = 1;
    short s = 3;
    wchar_t wch = L'b';
    
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(s).name() << std::endl;
    std::cout << typeid(wch).name() << std::endl;
}
}
namespace lee2{
class A{
public:
    virtual void print() {cout << "this is class A."<<std::endl;}
};
class B : public A{
public:
    virtual void print() {cout<<"this is class B."<<endl;}
};
class C{
    void print() {cout << "this is class C."<<endl;}
};

void test2(){
    A *pA1 = new A();
    A a2;
    A *pA2 = new B();
    cout << typeid(pA1).name() << endl;
    cout << typeid(a2).name()<<endl;
    cout << typeid(pA2).name()<<endl;
    pA1->print();
    pA2->print();
    cout << typeid(*pA1).name() << endl;
    cout << typeid(*pA2).name() << endl;
}
}
int main(){
    lee1::test1();
    lee2::test2();
}
