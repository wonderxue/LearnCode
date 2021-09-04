#include <iostream>
#include <fstream>
#include <string>
//文件读写
using namespace std;
void test()
{
    ofstream ofs;
    ofs.open("text.txt",ios::out|ios::trunc);
    ofs<<"zhang san"<<endl;
    ofs<<"male 18"<<endl;
    ofs.close();
}
void test1()
{
    ifstream ifs;
    ifs.open("text.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"file opend failure"<<endl;
        return;
    }
    //char buffer[1024];
    // while(ifs>>buffer)
    // {
    //     cout<<buffer<<endl;
    // }
    //char buffer[1024];
    // while(ifs.getline(buffer,sizeof(buffer)))
    // {
    //     cout<<buffer<<endl;
    // }
    string buffer;
    while (getline(ifs,buffer))
    {
        cout<<buffer<<endl;
    }
    ifs.close();
}
int main()
{
    test();
    test1();
    return 0;
}