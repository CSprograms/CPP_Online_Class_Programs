// PRACTICAL PROGRAM 04 - Friend Class and Friend Function

#include <iostream>
using namespace std;

class c2;

class c1
{
private:
    int a;
    int b;
public:
    c1(int t1, int t2)
    {
        a = t1;
        b = t2;
    }
    friend class c2;                // Friend Class
    friend void minimum(c1,c2 &);     // Friend Function
};

class c2
{
private:
    int min;
public:
    friend void minimum(c1,c2 &);     // Friend Function
    int getMin();
};

void minimum(c1 arg1, c2 &arg2)
{
    arg2.min = arg1.a < arg1.b ? arg1.a : arg1.b;

    //return arg2.min;
}

int c2 :: getMin()
{
    return min;
}

int main()
{
   c1 object1(20,30);
   c2 object2;

   minimum(object1,object2);

   //cout<<"Minimum Value : "<<minimum(object1,object2)<<endl;
   cout<<"Minimum Value : "<<object2.getMin()<<endl;

return 0;
}
