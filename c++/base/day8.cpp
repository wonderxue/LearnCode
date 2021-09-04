#include <iostream>
/*
运算符重载
*/
using namespace std;
class Dog
{
    public:
    int age;
    Dog operator+(Dog &d);
    Dog &operator++();
    Dog operator++(int);
};
//成员函数重载
Dog Dog::operator+(Dog &d)
{
    Dog temp;
    temp.age=this->age+d.age;
    cout<<"member function overload"<<endl;
    return temp;
}
//全局函数重载
Dog operator-(Dog &d1,Dog &d2)
{
    Dog temp;
    temp.age=d1.age-d2.age;
    cout<<"global function overload"<<endl;
    return temp;
}
//左移重载
ostream & operator<<(ostream &cout,const Dog &d)
{
    cout<<"dog's age="<<d.age;
    return cout;
}
//前置++
Dog &Dog::operator++()
{
    age++;
    return *this;
}
//后置++
Dog Dog::operator++(int)
{
    Dog temp=*this;
    age++;
    return temp;
}

int main()
{
    Dog d1,d2,d;
    d1.age=10;
    d2.age=20;
    d=d1+d2;
    cout<<d.age<<endl;
    d=d1-d2;
    cout<<++d<<endl;
    cout<<d.age<<endl;
    cout<<d<<endl;
    d=d1++;
    cout<<d1++<<endl;
    cout<<d1<<endl;
    return 0;
}