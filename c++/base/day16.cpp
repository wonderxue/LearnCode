#include <iostream>
//多态的好处
using namespace std;
class Calculator
{
public:
    int a;
    int b;
    virtual int getAns()
    {
        return 0;
    }
    virtual ~Calculator()
    {
        
    }
};
class Add : public Calculator
{
public:
    int getAns()
    {
        return a + b;
    }
};
class Sub : public Calculator
{
public:
    int getAns()
    {
        return a - b;
    }
};

void test()
{
    Calculator *ab=new Add;
    ab->a=10;
    ab->b=10;
    cout<<ab->a<<"+"<<ab->b<<"="<<ab->getAns()<<endl;
    delete ab;
    ab=new Sub;
    ab->a=10;
    ab->b=10;
    cout<<ab->a<<"-"<<ab->b<<"="<<ab->getAns()<<endl;
    delete ab;
}
int main()
{
    test();
    return 0;
}