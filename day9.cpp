#include <iostream>
/*
深浅拷贝
*/
using namespace std;

class Dog
{
    public:
    int *age;
    Dog(int a);
    Dog(const Dog &d);
    ~Dog();
};
Dog::Dog(int a)
{
    age=new int(a);
    cout<<"Dog 构造函数"<<endl;
}
//深拷贝
Dog::Dog(const Dog &d)
{
    age=new int(*d.age);
    cout<<"深拷贝"<<endl;
}
Dog::~Dog()
{
    if(age!=NULL)
    {
        delete age;
        age=NULL;
    }
    cout<<"深拷贝析构"<<endl;
}
class Pig
{
    public:
    int *age;
    Pig(int a);
    Pig(const Pig &p);
    ~Pig();
};
Pig::Pig(int a)
{
    age=new int(a);
    cout<<"Pig 构造函数"<<endl;
}
//浅拷贝
Pig::Pig(const Pig &p)
{
    age=p.age;
    cout<<"浅拷贝"<<endl;
}
Pig::~Pig()
{
    if(age!=NULL)
    {
        delete age;
        age=NULL;
    }
    cout<<"浅拷贝析构"<<endl;
}
void test()
{
    Dog d(1);
    Dog d1=d;
}
void test1()
{
    Pig d(1);
    Pig d1=d;
}
int main()
{
    test();
    //test1();报错，delete已经delete的内存
    system("pause");
    return 0;
}