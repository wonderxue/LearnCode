#include <iostream>
#include <string>
/*
友元
*/
using namespace std;
class Dog;
//类做友元
class Cat
{
    public:
    void catSay(Dog *d);
};
//成员函数做友元
class Pig
{
    public:
    void pigSay(Dog *d);
};
class Dog
{
    friend void getinfo(Dog *d);
    friend class Cat;
    friend void Pig::pigSay(Dog *d);
    public:
    Dog();
    private:
    string name;
    string speak;
};
Dog::Dog()
{
    name="wangcai";
    speak="wang wang wang";
}
void Cat::catSay(Dog *d)
{
    cout<<"Cat says: "<<d->name<<" speak "<<d->speak<<endl;
}
void Pig::pigSay(Dog *d)
{
    cout<<"Pig says: "<<d->name<<" speak "<<d->speak<<endl;
}
//全局函数做友元
void getinfo(Dog *d)
{
    cout<<d->name<<" says: "<<d->speak<<endl;
}
int main()
{
    Dog d;
    Cat c;
    Pig p;
    getinfo(&d);
    c.catSay(&d);
    p.pigSay(&d);
    return 0;
}