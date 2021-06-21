#include <iostream>
#include <string>
//继承
using namespace std;
class Animal
{
    public:
    string name;
    void say();
    protected:
    int height;
    private:
    int weight;
};
void Animal::say()
{
    cout<<"my name is "<<name<<endl;
    cout<<"my height is "<<height<<endl;
    cout<<"my weight is "<<weight<<endl;
}
class Cat:public Animal
{
    public:
    Cat(string name);
};

Cat::Cat(string name)
{
    this->name=name;
}

void test()
{
    Cat cat("tony");
    cat.say();
}

int main()
{
    test();
    return 0;
}