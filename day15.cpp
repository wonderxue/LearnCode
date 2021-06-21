#include <iostream>
//多态，静绑定和动绑定
using namespace std;
class A
{
    public:
    void speak();
};
void A::speak()
{
    cout<<"A speaking"<<endl;
}

class B:public A
{
    public:
    void speak();
};
void B::speak()
{
    cout<<"B speaking"<<endl;
}

class C
{
    public:
    virtual void speak();
};

void C::speak()
{
    cout<<"C speaking"<<endl;
}
class D:public C
{
    public:
    void speak();
};
void D::speak()
{
    cout<<"D speaking"<<endl;
}
void doSpeakA(A &a)
{
    a.speak();
}
void doSpeakC(C &c)
{
    c.speak();
}
void test()
{
    B b;
    cout<<"静态绑定"<<endl;
    doSpeakA(b);
    D d;
    cout<<"动态绑定"<<endl;
    doSpeakC(d);
}

int main()
{
    test();
}