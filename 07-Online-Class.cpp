// Simple if -- Odd or Even -- Logical Not !
#include<iostream>
using namespace std;
int main()
{
    int ip1=8;

    //cout<<"Enter value for ip1 : ";     cin>>ip1;

    if(ip1%2)
        cout<<"The Given Value is ODD"<<endl;

    if(!(ip1%2))
        cout<<"The Given Value is EVEN"<<endl;

return 0;
}
