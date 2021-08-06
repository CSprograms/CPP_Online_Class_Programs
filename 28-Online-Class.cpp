// Inheritance - Single - Practical 5-B : Sum of two values
#include <iostream>
using namespace std;

class c1
{
    int v1;
    int v2;
public:

    c1(int val1,int val2)   // Argumented Constructor with Default Value
    {
        v1 = val1;
        v2 = val2;
    }
    int getV1()
    {
        return v1;
    }
    int getV2()
    {
        return v2;
    }
};

class c2 : private c1
{
    int sum;
    void calcSum()
    {
        sum = getV1() + getV2();
    }
public:
    c2(int val1, int val2):c1(val1,val2)
    {

    }
    int getSum()
    {
        calcSum();
        return sum;
    }
};

class c3 : public c2
{
public:
    c3(int val1 = 0, int val2 = 0):c2(val1,val2)
    {

    }
};

int main()
{
    c3 object1;
    cout<<"Object1 Sum : "<<object1.getSum()<<endl;

    c3 object2(10);
    cout<<"Object2 Sum : "<<object2.getSum()<<endl;

    c3 object3(10,20);
    cout<<"Object3 Sum : "<<object3.getSum()<<endl;

    return 0;
}
