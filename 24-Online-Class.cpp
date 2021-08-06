// PRACTICAL PROGRAM 01.

#include <iostream>
using namespace std;
class io
{
private:
    int value;
public:
    io()    // Empty Constructor
    {
        value = 0;
    }
    io(int ip)  // Argumented Constructor
    {
        value = ip;
    }
/*    io(io *ip)  // Copy Constructor
    {
        value = ip->value;
    }
*/
    int get(void);
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

int io :: get(void)
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

   cout<<"Object 1 : "<<object1.get()<<endl;
   cout<<"Object 2 : "<<object2.get()<<endl;
   cout<<"Object 3 : "<<object3.get()<<endl;

return 0;
}
