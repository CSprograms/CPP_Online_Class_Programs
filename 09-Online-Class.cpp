// else if ladder : Biggest among three numbers
#include<iostream>
using namespace std;
int main()
{
    int ip1, ip2, ip3;

    cout<<"Enter value for ip1 : ";     cin>>ip1;
    cout<<"Enter value for ip2 : ";     cin>>ip2;
    cout<<"Enter value for ip3 : ";     cin>>ip3;

    if( ip1 > ip2 and ip1 > ip3) //&&
        cout<<"ip1 is biggest among three numbers."<<endl;

    else if ( ip2 > ip1 and ip2 > ip3 )
        cout<<"ip2 is biggest among three numbers."<<endl;

    else if ( ip3 > ip1 and ip3 > ip2 )
        cout<<"ip3 is biggest among three numbers."<<endl;

return 0;
}
