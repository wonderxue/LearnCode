#include <iostream>
//虚继承 ，菱形继承
using namespace std;

class A
{
    public:
    int a=10;
};
//菱形继承
class B:public A{};
class C:public A{};
class D:public B,public C{};

//虚继承
class E:virtual public A{};
class F:virtual public A{};
class G:public E,public F{};
void test()
{
    D d;
    //cout<<d.a<<endl;
    d.B::a=10;
    d.C::a=20;
    cout<<d.B::a<<endl;
    cout<<d.C::a<<endl;
}

void test1()
{
    G g;
    g.a=10;
    g.E::a=20;
    cout<<g.a<<endl;
}
int main()
{
    test1();
    return 0;
}