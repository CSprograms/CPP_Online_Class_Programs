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
    int result;
    void calcResult()
    {
        result = getOpe1() + getOpe2();
    }
public:
    addition(int val1 = 0, int val2 = 0):operands(val1,val2)
    {

    }
    int getResult()
    {
        calcResult();
        return result;
    }
};

int main()
{
    addition object1;
    cout<<"Object1 Sum : "<<object1.getResult()<<endl;

    addition object2(10);
    cout<<"Object2 Sum : "<<object2.getResult()<<endl;

    addition object3(10,20);
    cout<<"Object3 Sum : "<<object3.getResult()<<endl;

    return 0;
}
