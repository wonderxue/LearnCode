#include <iostream>
/*
this指针
*/
using namespace std;
class HotDog
{
    public:
    void pay();
    void setPrice(int price);
    void setNum(int num);
    private:
    int price;
    int num;
};
void HotDog::pay()
{
    cout<<"payment="<<price*num<<endl;
}
void HotDog::setNum(int num)
{
    this->num=num;
}
void HotDog::setPrice(int price)
{
    this->price=price;
}
int main()
{
    HotDog hd;
    hd.setNum(10);
    hd.setPrice(3);
    hd.pay();
}