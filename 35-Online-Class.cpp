//
// Infix to Postfix
//
#include <stack>
#include<string.h>
#include <iostream>
using namespace std;
void display(stack<char> &);

int main()
{
    stack<char> postfix;
    stack<char> temp;
    string infix;

    cout<<"Enter the Infix Expression : ";
    cin>>infix;

    for(char value : infix)
    {

        if ( (value >= 'A' and value <= 'Z') or (value >= 'a' and value <= 'z') )
            postfix.push(value);

        else if ( value == '(' )
                    temp.push(value);

        else if ( value == ')' )
        {
            while( temp.top() != '(' )
            {
                postfix.push(temp.top());
                temp.pop();
            }
            temp.pop();
        }

        else if ( value == '*' or value == '/' )
        {

            if( temp.empty() or temp.top() == '(' or temp.top() == '+' or temp.top() == '-' )
            {
                temp.push(value);
            }
            else
            {
                while( temp.top() == '*'  or temp.top() == '/'  )
                {
                    postfix.push(temp.top());
                    temp.pop();
                }
                temp.push(value);
            }
        }

        else if ( value == '-' or value == '+' )
        {
            if( temp.empty() or temp.top() == '(' )
            {
                temp.push(value);
            }
            else
            {
                while(  !temp.empty()  and temp.top() != '(' )
                {
                    postfix.push(temp.top());
                    temp.pop();

                }
                temp.push(value);
            }
        }
    }
    while( !temp.empty())
    {
        postfix.push(temp.top());
        temp.pop();
    }
    cout<<"\n \n Infix : "<<infix;
    cout<<"\n Postfix : ";
    display(postfix);
    cout<<endl;

    return 0;
}

void display(stack<char> &ptr)
{
    if(!ptr.empty())
    {
    char element;
    element = ptr.top();
    ptr.pop();
    if(!ptr.empty())
        display(ptr);
    cout<<element<<" ";
    ptr.push(element);
    }
}








