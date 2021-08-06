// Sum of N numbers using Array (One Dimension)
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the N : ";
    cin>>n;

    int ip[n], loop, sum{0};

    cout<<"Enter Values for Array:"<<endl;

    for(loop = 0; loop < n ; loop++ )
    {
        cout<<"ip[ "<<loop<<" ] : ";
        cin>>ip[loop];
    }

    for(loop = 0; loop < n ; loop++ )
    {
        sum += ip[loop];

    }

    cout<<"Sum : "<<sum;


return 0;
}
