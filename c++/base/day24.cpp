#include "day24.hpp"

void printAll(myArray<int> &arr)
{
    int size=arr.getSize();
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void test()
{
    myArray<int> A(5);
    myArray<int> B(A);
    myArray<int> C(3);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    A.push_back(3);
    A.push_back(4);
    printAll(A);
    C=A;
    C.pop_back();
    printAll(C);
}

int main()
{
    test();
    return 0;
}