#include <iostream>
class X{
public:
    X(){};
    virtual ~X(){};
private:
    int mX;
};
class XX : public X{
public:
    XX(){};
    virtual ~XX(){};
private:
    int mXX;
};
class XY : public X{
public:
    XY(){};
    virtual ~XY(){};
private:
    int mXY;
};
int main()
{
    X x;
    XX xx;
    XY xy;

    X *px = &xx;
    std::cout << px << std::endl;
    XX* pxx = dynamic_cast<XX*>(px);
    std::cout << pxx << std::endl;

    XY* pxy = dynamic_cast<XY*>(px);
    std::cout  << pxy << std::endl;

    pxy = (XY*)px;
    std::cout << pxy << std::endl;
    pxy = static_cast<XY*>(px);
    std::cout << pxy << std::endl;
    return 0;
}

