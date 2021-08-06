// Inheritance - Single - Practical 5-A : Sum of two values  Practical 6 : Derived Class Constructor
#include <iostream>
using namespace std;

class operands
{
    int ope1;
    int ope2;
public:

    operands(int val1 = 0, int val2 = 0)   // Argumented Constructor with Default Value
    {
        ope1 = val1;
        ope2 = val2;
    }
    int getOpe1()
    {
        return ope1;
    }
    int getOpe2()
    {
        return ope2;
    }
};

class addition : private operands
{
    int sum;
    void calcSum()
    {
        sum = getOpe1() + getOpe2();
    }
public:
    addition(int val1 = 0, int val2 = 0):operands(val1,val2)
    {

    }
    int getSum()
    {
        calcSum();
        return sum;
    }
};

int main()
{
    addition object1;
    cout<<"Object1 Sum : "<<object1.getSum()<<endl;

    addition object2(10);
    cout<<"Object2 Sum : "<<object2.getSum()<<endl;

    addition object3(10,20);
    cout<<"Object3 Sum : "<<object3.getSum()<<endl;

    return 0;
}
