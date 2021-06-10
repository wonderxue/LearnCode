#include <iostream>
/*
类的成员是类时，构造函数和析构函数的调用顺序
*/
using namespace std;
class Dog
{
    public:
    void speak();
    Dog();
    ~Dog();
};
class Animal
{
    public:
    Dog dog;
    Animal();
    ~Animal();

};
int main()
{
    Animal an;
    an.dog.speak();
    return 0;
}
Dog::Dog()
{
    cout<<"Dog create fun"<<endl;
}
Dog::~Dog()
{
    cout<<"Dog destroy fun"<<endl;
}
Animal::Animal()
{
    cout<<"Animal create fun"<<endl;
}
Animal::~Animal()
{
    cout<<"Animal destroy fun"<<endl;
}
void Dog::speak()
{
    cout<<"Dog talks"<<endl;
}