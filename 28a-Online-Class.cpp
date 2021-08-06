// Inheritance - Multi-level - Practical 5-B : (a+b)^2
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

class square : private addition
{
    int sq;
    void calcSq()
    {
        int temp =getSum();
        sq = temp * temp;
    }
public:
    square(int val1 = 0, int val2 = 0):addition(val1,val2)
    {

    }
    int getSq()
    {
        calcSq();
        return sq;

    }

};

int main()
{
    square object1;
    cout<<"Object1 Square : "<<object1.getSq()<<endl;

    square object2(10);
    cout<<"Object2 Square : "<<object2.getSq()<<endl;

    square object3(10,20);
    cout<<"Object3 Square : "<<object3.getSq()<<endl;

    return 0;
}
