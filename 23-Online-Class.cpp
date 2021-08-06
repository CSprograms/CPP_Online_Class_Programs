// PRACTICAL PROGRAM 02.

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

    io(io *ip)  //Copy Constructor  object2's address in ip pointer
    {
        value = ip->value;      //ip.value
    }

    void print(void);

};

void io :: print(void)
{
    cout<<"The given value is "<<value<<"."<<endl;
}
int main()
{
   io object1;          // Empty
   io object2(6);       // Argumented
   io object3(object2); // Copy

   object1.print();
   object2.print();
   object3.print();

return 0;
}
