// PRACTICAL PROGRAM 03 - Static Data and Static Function - Array of objects.

#include <iostream>
using namespace std;
class static_type
{
private:
    int value;
    static int total;
public:
    static_type(int temp)
    {
        value = temp;
        total += temp;
    }
    int getValue()
    {
        return value;
    }
    static int sum()
    {
        return total;
    }
};

int static_type::total;

int main()
{
   static_type object[5]={0,1,2,3,4};

   for(int loop = 0; loop < 5; ++loop)
   {
       cout<<"object["<<loop<<"] : "<<object[loop].getValue()<<endl;
   }

   cout<<"\nSum : "<<static_type::sum()<<endl;

return 0;
}
