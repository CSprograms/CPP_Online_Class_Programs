// Nested if : Biggest among three numbers
#include<iostream>
using namespace std;
int main()
{
    int ip1, ip2, ip3, big;

    cout<<"Enter value for ip1 : ";     cin>>ip1;
    cout<<"Enter value for ip2 : ";     cin>>ip2;
    cout<<"Enter value for ip3 : ";     cin>>ip3;

    big = ip1;

    if( ip2 > ip3 )
    {
        if( ip2 > big )
            big = ip2;
    }
    else
    {
        if( ip3 > big )
            big = ip3;
    }

    cout<<"Biggest value is "<<big<<"."<<endl;

return 0;
}
