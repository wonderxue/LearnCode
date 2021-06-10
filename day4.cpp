#include <iostream>
/*
静态成员函数
*/
using namespace std;
class Pig
{
    public:
    static int age;
    static void getAge();
    private:
    static void info();
};
int Pig::age=10;
int main()
{
    Pig p;
    p.age=11;
    p.getAge();
    Pig::getAge();
    return 0;
}
void Pig::getAge()
{
    cout<<"age="<<age<<endl;
    info();
}
void Pig::info()
{
    cout<<"pig age="<<age<<endl;
}