#include <iostream>
#include <string>
//类模板，类模板对象做函数参数
using namespace std;

template<class typeAge,class typeName>
class Dog
{
    public:
    typeAge age;
    typeName name;
    Dog(typeAge age,typeName name)
    {
        this->age=age;
        this->name=name;
    };
    void showInfo()
    {
        cout<<"age="<<age<<"  name="<<name<<endl;
    };
};

void test()
{
    Dog<int,string> d={18,(string)"xue"};
    d.showInfo();
    Dog<char*,float> d1={"tony",12.3};
    d1.showInfo();
    Dog<float,char*> d2={12.4,"tony"};
    d2.showInfo();
}

void test1(Dog<int,string> &d)
{
    d.showInfo();
}

template<class T1,class T2>
void test2(Dog<T1,T2> &d)
{
    d.showInfo();
    cout<<"T1="<<typeid(T1).name()<<"  T2="<<typeid(T2).name()<<endl;
}
template<class T1>
void test3(T1 &d)
{
    d.showInfo();
}
int main()
{
    Dog<int,string> d={18,(string)"xue"};
    test();
    test1(d);
    test2(d);
    test3(d);
    return 0;
}