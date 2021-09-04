#include <iostream>
//子类父类 ，成员名称相同
using namespace std;
class Base
{
    public:
    int age=20;
    static int a;
};
class Son:public Base
{
    public:
    int age=30;
    static int a;
};
int Son::a=20;
int Base::a=10;
void test()
{
    Son s;
    cout<<s.age<<endl;
    cout<<s.Base::age<<endl;
    cout<<s.a<<endl;
    cout<<s.Base::a<<endl;
}

int main()
{
    test();
    return 0;
}