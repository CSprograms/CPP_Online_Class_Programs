// PRACTICAL PROGRAM 04 - Friend Class and Friend Function

#include <iostream>
using namespace std;

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
    friend void get(c1);            // Friend Function
};

class c2
{
private:
    int min;
public:
    void minimum(c1 temp);
    friend void get(c2);             // Friend Function
};

void c2 :: minimum(c1 temp)
{
    min = temp.a < temp.b ? temp.a : temp.b;
}

void get(c1 temp)
{
    cout<<"The values are : "<<temp.a<<", "<<temp.b<<endl;
}

void get(c2 temp)
{
    cout<<"Minimum Value : "<<temp.min<<endl;
}

int main()
{
   c1 object1(20,30);
   c2 object2;

   object2.minimum(object1);
   get(object1);
   get(object2);
return 0;
}
