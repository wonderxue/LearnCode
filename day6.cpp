#include <iostream>
/*
指针常数和常数指针，const修饰成员函数
*/
using namespace std;
class Dog
{
    public:
    int age;
    mutable int num;
    void info() const;
};
void Dog::info()const
{
    //this->age=10;错误
    this->num=10;
    cout<<this->num<<endl;
}

int main()
{
    //常数指针
    int a=10;
    int b=20;
    const int *p=&a;
    a=20;
    //*p=20;错误
    p=&b;
    //指针常数
    int * const q=&a;
    a=3;
    *q=30;
    //q=&b;错误

}