// break
#include<iostream>
using namespace std;
int main()
{
    int ip1, loop;

    cout<<"Enter value for ip1 : ";     cin>>ip1;

    cout<<"Break"<<endl;
    for(loop=1; loop<=ip1; loop++)
    {
        if(loop == 5)
            break;
        cout<<ip1<<" + "<<loop<<" = "<< ip1 + loop <<endl;
    }

// Based on loop condition.
    if( loop == ip1 + 1 )
        cout<<"Loop terminated normally."<<endl;
    else
        cout<<"Loop has been breaked."<<endl;

return 0;
}
