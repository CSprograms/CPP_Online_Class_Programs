// for loop
#include<iostream>
using namespace std;
int main()
{
    int ip1;

    cout<<"Enter value for ip1 : ";     cin>>ip1;

    for(int loop=1; loop <= ip1; loop++)        //for( ; ; )
    {
        cout<<ip1<<" + "<<loop<<" = "<< ip1 + loop <<endl;
    }

return 0;
}
