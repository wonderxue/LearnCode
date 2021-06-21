#include <iostream>
#include <fstream>
using namespace std;

class Dog
{
    public:
    char name[20];
    int age;
};
void test()
{
    ofstream ofs("dog.txt",ios::binary|ios::out|ios::trunc);
    if(!ofs.is_open())
    {
        cout<<"file open failure"<<endl;
        return;
    }
    Dog d={"Tony",18};
    ofs.write((char *)&d,sizeof(d));
    ofs.close();

    ifstream ifs("dog.txt",ios::binary|ios::in);
    if(!ifs.is_open())
    {
        cout<<"file open failure"<<endl;
        return;
    }
    Dog p;
    ifs.read((char *)&p,sizeof(p));
    ifs.close();
    cout<<d.name<<d.age<<endl;
    cout<<p.name<<p.age<<endl;
}
int main()
{
    test();
    return 0;
}