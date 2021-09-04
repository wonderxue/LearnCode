#include <iostream>
//函数模板和函数模板重载
using namespace std;
template<typename T>
class Dog
{
};
class Cat:public Dog<int>
{

};
template<class T>
class Pig:public Dog<T>
{
    public:
    Pig();
    void info();
};

template<class T>
Pig<T>::Pig()
{

}

template<class T>
void Pig<T>::info()
{

}
int main()
{
    Cat c;
    Pig<int> p;
    return 0;
}
