// PRACTICAL PROGRAM 02.

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

    io(io *ip)
    {
        value = ip->value;
    }

    void print(void);

};

void io :: print(void)
{
    cout<<"The given value is "<<value<<"."<<endl;
}
int main()
{
   io object1;
   io object2(6);
   io object3(object2);

   object1.print();
   object2.print();
   object3.print();

return 0;
}
