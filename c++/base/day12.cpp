#include <iostream>
//继承时，构造函数和析构函数顺序
using namespace std;

class Base
{
    public:
    Base();
    ~Base();
};
Base::Base()
{
    cout<<"Base Create Fun Called"<<endl;
}
Base::~Base()
{
    cout<<"Base Destroy Fun Called"<<endl;
}

class Son:public Base
{
    public:
    Son();
    ~Son();
};
Son::Son()
{
    cout<<"Son Create Fun Called"<<endl;
}
Son::~Son()
{
    cout<<"Son Destroy Fun Called"<<endl;
}

void test()
{
    Son s;
}

int main()
{
    test();
    return 0;
}