#include <iostream>
//函数模板和函数模板重载
using namespace std;
class Dog
{
    public:
    int age;
    int id;
};
template<typename T>
void swap1(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"template function called"<<endl;
}
template<typename T>
bool equal(const T &a,const T &b)
{
    if(a==b)
    {
        return true;
    }
    return false;
}
template<> bool equal(const Dog &d1,const Dog &d2)
{
    if(d1.age==d2.age&&d2.id==d1.id)
    {
        return true;
    }
    return false;
}
void swap1(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"normal function called"<<endl;
}
int main()
{
    //char a=20,b=30;
    int a=20,b=30;
    Dog c={12,4},d={12,4};
    swap1(a,b);
    cout<<equal(a,b)<<endl;
    cout<<equal(c,d)<<endl;
    cout<<"a="<<(int)a<<"  b="<<(int)b<<endl;
    return 0;
}
