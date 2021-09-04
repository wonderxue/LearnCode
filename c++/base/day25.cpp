#include <iostream>
#include <vector>
#include <algorithm>
//vector初识
using namespace std;
void printV(int t)
{
    cout<<t<<endl;
}
void test()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    vector<int>::iterator vbegin=v.begin();
    vector<int>::iterator vend=v.end();
    vector<int> v1(vbegin,vbegin+3);
    vbegin=v1.begin();
    vend=v1.end();
    //第一种
    // for(;vbegin!=vbegin;vbegin++)
    // {
    //     cout<<*vbegin<<endl;
    // }

    //第二种
    // while(vbegin!=vend)
    // {
    //     cout<<*vbegin<<endl;
    //     vbegin++;
    // }

    //第三种
    for_each(vbegin,vend,printV);
}

int main()
{
    test();
    return 0;
}