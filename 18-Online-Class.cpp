// Biggest among N numbers using Array (One Dimension)
#include<iostream>
using namespace std;
//      1 5 6 8 1
//      1 5 6 8
int main()
{
    int n;

    cout<<"Enter the N : ";
    cin>>n;

    int ip[n], loop, big;

    cout<<"Enter Values for Array:"<<endl;

    for(loop = 0; loop < n ; loop++ )
    {
        cout<<"ip[ "<<loop<<" ] : ";
        cin>>ip[loop];
    }

    big = ip[0];

    for(loop = 1; loop < n; loop++ )
    {
        if( ip[loop] > big )
            big = ip[loop];
        cout<<"Loop [ "<<loop<<" ] Biggest Value : "<<big<<endl;
    }

    cout<<"Biggest Value : "<<big;


return 0;
}
