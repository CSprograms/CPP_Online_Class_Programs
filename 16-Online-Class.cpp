// Accessing Array (One Dimension)
#include<iostream>
using namespace std;
#define SIZE 10
int main()
{
    int ip[SIZE], loop;

    cout<<"Enter Values for Array:"<<endl;

    for(loop = 0; loop < SIZE; loop++ )
    {
        cout<<"ip[ "<<loop<<" ] : ";
        cin>>ip[loop];
    }

    cout<<"Elements of ip : ";
    for(loop = 0; loop < SIZE; loop++ )
    {
        cout<<ip[loop];

      if(loop < SIZE-2)
            cout<<", ";
      else if ( loop < SIZE-1)
            cout<<" and ";
      else
        cout<<".";
    }


return 0;
}
