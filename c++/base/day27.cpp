#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <list>
#include <map>
#include <stack>
#include <algorithm>
#include <string>
//大部分STL容器
using namespace std;
void printAll(deque<int> A)
{
    for (deque<int>::iterator i = A.begin(); i != A.end(); i++)
    {
        cout << *i << "  ";
    }
    cout << endl;
}
void printAll(vector<int> A)
{
    for (vector<int>::iterator i = A.begin(); i != A.end(); i++)
    {
        cout << *i << "  ";
    }
    cout << endl;
}
void printAll(list<int> A)
{
    for (list<int>::iterator i = A.begin(); i != A.end(); i++)
    {
        cout << *i << "  ";
    }
    cout << endl;
}
void test01()
{
    vector<int> A;
    A.assign(6, 10);
    printAll(A);
    deque<int> B(2);
    B.push_back(13);
    B.push_front(10);
    printAll(B);
    queue<int> C;
    C.push(12);
    C.push(13);
    C.push(14);
    C.pop();
    cout << C.front() << endl;
    C.pop();
    cout << C.front() << endl;
    set<int> D;
    D.insert(12);
    D.insert(12);
    cout << D.size() << endl;
    multiset<int> E;
    E.insert(12);
    E.insert(12);
    cout << E.size() << endl;
    list<int> F;
    F.assign(2, 10);
    list<int>::const_iterator i = F.begin();
    F.insert(i, 12);
    printAll(F);
    map<int, string> G;
    G.insert(pair<int, string>(1, "wang"));
    G.insert(pair<int, string>(1, "zhang"));
    cout << G.size() << endl;
    cout << G[1] << endl;
    multimap<int, string> H;
    H.insert(pair<int, string>(1, "wang"));
    H.insert(pair<int, string>(1, "zhang"));
    cout << H.size() << endl;
    pair<multimap<int, string>::iterator,multimap<int, string>::iterator> b=H.equal_range(1);
    cout << b.first->second<< endl;
    cout << (--(b.second))->second<< endl;
    stack<int> I;
    I.push(12);
    I.push(13);
    I.push(14);
    I.push(15);
    I.push(16);
    I.pop();
    while(!I.empty())
    {
        cout<<I.top()<<" ";
        I.pop();
    }
    cout<<endl;
}
int main()
{
    test01();
    return 0;
}