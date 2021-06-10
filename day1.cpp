#include <iostream>
/*
学习构造函数，析构函数和拷贝函数
*/
using namespace std;
class Person
{
    public:
    int age;
    int *height;
    Person();
    Person(int age,int height=10);
    Person(const Person &p);
    ~Person();
    private:
    void hh();
};
int main()
{
    Person p1;
    *p1.height=20;
    cout<<"age="<<p1.age<<"  height="<<*p1.height<<endl;
    Person p2(2);
    cout<<"age="<<p2.age<<"  height="<<*p2.height<<endl;
    Person p3(p2);
    system("pause");
    cout<<"age="<<p3.age<<"  height="<<*p3.height<<endl;
    return 0;
}

Person::Person()
{
    cout<<"无参数构造函数called"<<endl;
    height=new int();
}
Person::Person(int age,int pheight)
{
    cout<<"有参数构造函数called"<<endl;
    age=age;
    height=new int(pheight);
}
Person::Person(const Person &p)
{
    age=p.age;
    height=new int(*p.height);
    cout<<"拷贝函数called"<<endl;
}
Person::~Person()
{
    if(height!=NULL)
    {
        delete(height);
        height=NULL;
    }
    cout<<"析构造函数called"<<endl;
}