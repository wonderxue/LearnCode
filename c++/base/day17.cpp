#include <iostream>
//纯虚函数 抽象类
using namespace std;
class A
{
    public:
    virtual void speak()=0;
};
class B:public A
{
    public:
    void speak()
    {
        cout<<"haha"<<endl;
    }
};

void test()
{
    A *a=new B;
    a->speak();
}

int main()
{
    test();
    return 0;
}