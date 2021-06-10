#include <iostream>
/*
初始化列表
*/
using namespace std;
class Pig
{
public:
    int age;
    int weight;
    Pig(int a,int b);
};

Pig::Pig(int a,int b) : age(a), weight(b)
{
}
int main()
{
    Pig p(12,24);
    cout<<"age="<<p.age<<"    weight="<<p.weight<<endl;
    system("pause");
    return 0;
}