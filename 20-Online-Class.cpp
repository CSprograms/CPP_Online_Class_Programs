// Pointer
#include<iostream>
using namespace std;

int main()
{
    int ip, *ptr1, **ptr2;

    cout<<"Enter the ip : ";
    cin>>ip;

    ptr1 = &ip;
    ptr2 = &ptr1;

//  cout<<"Address of ip : "<<&ip<endl;
//  cout<<"Address of ip : "<<ptr<endl;

    cout<<"Value of ip : "<<ip<<endl;
    cout<<"Value of ip (ptr1) : "<<*ptr1<<endl;
    cout<<"Value of ip (ptr2) : "<<**ptr2<<endl;



return 0;
}
