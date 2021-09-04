#include <iostream>
#include <string>
/*
运算符重载
*/
using namespace std;
class Dog
{
    public:
    int *age;
    Dog(int a);
    Dog(const Dog &d);
    ~Dog();
    Dog &operator=(const Dog &d);
    Dog &operator()(const string &s);
};
Dog::Dog(int a)
{
    age=new int(a);
    cout<<"构造函数调用"<<endl;
}
Dog::Dog(const Dog &d)
{
    age=new int(*d.age);
    cout<<"拷贝函数调用"<<endl;
}
Dog::~Dog()
{
    if(age!=NULL)
    {
        delete age;
        age=NULL;
    }
    cout<<"析构函数调用"<<endl;
}
Dog &Dog::operator=(const Dog &d)
{
    if(age!=NULL)
    {
        delete age;
        age=NULL;
    }
    age=new int(*d.age);
    cout<<"重载函数调用"<<endl;
    return *this;
}
Dog &Dog::operator()(const string &s)
{
    cout<<s<<endl;
    return *this;
}
void test()
{
    Dog d1(1);
    Dog d2(2);
    d2=d1;
}
void test1()
{
    Dog d(2);
    d("hhh")("wwe");
}
int main()
{
    test();
    test1();
    return 0;
}