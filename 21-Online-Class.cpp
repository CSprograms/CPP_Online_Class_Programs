// User Defined Function - Square
#include<iostream>
using namespace std;

void welcome(void); //  without return value and without argument
int read(void);     // with return value and without argument
int square(int);    // with return value and with argument
void write(int);    //  without return value and with argument

int main()
{
    int ip, op;

    welcome();

    ip = read();

    op = square(ip);

    cout<<ip<<"^2 : ";
    write(op);
    cout<<endl;

return 0;
}
void welcome(void)
{
    cout<<"Demonstration program for user defined function"<<endl;
}
int square(int temp)
{
    return (temp*temp);
}
void write(int temp)
{
    cout<<temp;
}

int read()          // Definition
{
    int temp;
    cout<<"Enter a integer value : ";
    cin>>temp;
    return temp;
}
