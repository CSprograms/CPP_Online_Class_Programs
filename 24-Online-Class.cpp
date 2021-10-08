// PRACTICAL PROGRAM 01.

#include <iostream>
using namespace std;
class io
{
private:
    int value;
public:
    io()
    {
        value = 0;
    }
    io(int ip)
    {
        value = ip;
    }

    int getValue(void);
    io operator-();
    io operator-(io ope2);

};

io io :: operator-()
{
    io temp;
    temp.value = -value;
    return temp;
}
io io :: operator-(io ope2) // object1 implicit & object2 as argument
{
    io temp;
    temp.value = value - ope2.value;
    return temp;
}

int io :: getValue(void)
{
    return value;
}
int main()
{
   io object1(24);
   io object2;
   io object3;

   object2 = -object1;

   object3 = object1 - object2;

   cout<<"Object 1 : "<<object1.getValue()<<endl;
   cout<<"Object 2 : "<<object2.getValue()<<endl;
   cout<<"Object 3 : "<<object3.getValue()<<endl;

return 0;
}
