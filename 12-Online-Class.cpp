// while loop
#include<iostream>
using namespace std;
int main()
{
    int ip1, loop;

    cout<<"Enter value for ip1 : ";     cin>>ip1;

    loop=1;                      //loop=0;
    while( loop <= ip1 )         //while(loop<ip1)
    {
        cout<<ip1<<" + "<<loop<<" = "<<ip1+loop<<endl;
        loop++;                 //loop = loop + 1
    }


return 0;
}
