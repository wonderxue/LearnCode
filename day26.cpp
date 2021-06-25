#include <iostream>
#include <string>
using namespace std;
//string
void test()
{
    string str = "hello";
    str.append("world,haha", 0, 5);
    cout << str << endl;
    cout << (int)str.find("wo", 3) << endl;
    str.replace(1, 3, "aaaa");
    cout << str << endl;
    string str1 = "1qw";
    string str2 = "qw";
    if (str1.compare(str2) == 0)
        cout << "str1==str2" << endl;
    else
        cout << "str1!=str2" << endl;
    string str3 = "012345";
    cout << str3 << endl;
    cout << str3[4] << endl;
    cout << str3.at(4) << endl;
    string str4="abcdefgh";
    str4.insert(0,"as");
    str4.erase(6,1);
    cout<<str4<<endl;
    string str5="0123456";
    cout<<str5.substr(4,3)<<endl;
}

int main()
{
    test();
    return 0;
}