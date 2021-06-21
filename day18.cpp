#include <iostream>
//虚析构函数
using namespace std;
class A
{
    public:
    A();
    virtual ~A();
};
A::A()
{
    cout<<"A 构造函数调用"<<endl;
}
A::~A()
{
    cout<<"A 析构函数调用"<<endl;
}
class B:public A
{
    public:
    B();
    ~B();
};
B::B()
{
    cout<<"B 构造函数调用"<<endl;
}
B::~B()
{
    cout<<"B 析构函数调用"<<endl;
}
void test()
{
    A *a=new B;
    delete a;
}

int main()
{
    test();
    return 0;
}