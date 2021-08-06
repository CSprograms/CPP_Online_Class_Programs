// Sum of N numbers without Array
#include<iostream>
using namespace std;

int main()
{
    int n, ip, loop, sum{0};

    cout<<"Enter the N : ";
    cin>>n;

    cout<<"Enter the Values:"<<endl;

    for(loop = 0; loop < n ; loop++ )
    {
        cout<<"Enter value "<<loop+1<<" : ";
        cin>>ip;
        sum += ip;
    }


    cout<<"Sum : "<<sum;


return 0;
}
