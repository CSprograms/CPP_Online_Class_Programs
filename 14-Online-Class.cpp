// break VS continue
#include<iostream>
using namespace std;
int main()
{
    int ip1;

    cout<<"Enter value for ip1 : ";     cin>>ip1;

    cout<<"Break"<<endl;
    for(int loop=1; loop<=ip1; loop++)
    {
        if(loop == 5)
            break;
        cout<<ip1<<" + "<<loop<<" = "<< ip1 + loop <<endl;
    }

    cout<<"Continue"<<endl;
    for(int loop=1; loop<=ip1; loop++)
    {
        if(loop == 5)
            continue;
        cout<<ip1<<" + "<<loop<<" = "<< ip1 + loop <<endl;
    }

return 0;
}
