// Biggest(value and index) among N numbers using Array (One Dimension)
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the N : ";
    cin>>n;

    int ip[n], loop, big, index;

    cout<<"Enter Values for Array:"<<endl;

    for(loop = 0; loop < n ; loop++ )
    {
        cout<<"ip[ "<<loop<<" ] : ";
        cin>>ip[loop];
    }

    big = ip[0];
    index = 0;

    for (loop = 1 ; loop < n; loop++)
	{
		if(ip[loop]>big)
		{
		big=ip[loop];
		index=loop;
        }
	}
			cout<<"Biggest Value:"<<big<<endl;
			cout<<"Index value:"<<index;



return 0;
}
