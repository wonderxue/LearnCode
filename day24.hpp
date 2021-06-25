#include <iostream>
#include <string>
//模板类的成员函数和类外部实现写在.hpp文件中
//实现vector类似功能
using namespace std;
template<class T>
class myArray
{
    public:
    myArray(int capacity);
    ~myArray();
    myArray(const myArray &arr);
    int getSize();
    int getCapacity();
    bool push_back(T data);
    bool pop_back();
    T& operator[](int index);
    myArray& operator=(const myArray& arr);
    private:
    T* pAddr;
    int mSize;
    int mCapacity;
};
template<class T>
myArray<T>::myArray(int capacity)
{
    cout<<"构造函数调用"<<endl;
    this->mCapacity=capacity;
    this->mSize=0;
    pAddr=new T[mCapacity];
}

template<class T>
myArray<T>::~myArray()
{
    cout<<"析构函数调用"<<endl;
    if(pAddr!=NULL)
    {
        delete []pAddr;
        pAddr=NULL;
    }
}

template<class T>
myArray<T>::myArray(const myArray &arr)
{
    cout<<"拷贝函数调用"<<endl;
    this->mCapacity=arr.mCapacity;
    this->mSize=arr.mSize;
    pAddr=new T[mCapacity];
    for(int i=0;i<mCapacity;i++)
    {
        pAddr[i]=arr.pAddr[i];
    }
}
template<class T>
int myArray<T>:: getSize()
{
    return mSize;
}
template<class T>
int myArray<T>:: getCapacity()
{
    return mCapacity;
}
template<class T>
bool myArray<T>::push_back(T data)
{
    if(mSize==mCapacity)
    {
        return false;
    }
    *(pAddr+mSize)=data;
    mSize++;
    return true;
}
template<class T>
bool myArray<T>::pop_back()
{
    if(mSize==0)
    {
        return false;
    }
    mSize--;
    return true;
}
template<class T>
T& myArray<T>::operator[](int index)
{
    cout<<"重载[]函数调用"<<endl;
    return pAddr[index];
}
template<class T>
myArray<T>& myArray<T>::operator=(const myArray<T>& arr)
{
    cout<<"重载=函数调用"<<endl;
    if(pAddr!=NULL)
    {
        delete []pAddr;
        pAddr=NULL;
    }
    this->mCapacity=arr.mCapacity;
    this->mSize=arr.mSize;
    pAddr=new T[mCapacity];
    for(int i=0;i<mCapacity;i++)
    {
        pAddr[i]=arr.pAddr[i];
    }
    return *this;
}