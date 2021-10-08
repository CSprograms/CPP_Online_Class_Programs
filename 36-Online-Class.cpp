//
// Postfix Expression Evaluation
//
#include <stack>
#include<string.h>
#include <iostream>
using namespace std;

int main()
{
    stack<int> result;
    string postfix;
    int temp, ope1, ope2;

    cout<<"Enter the Postfix Expression : ";
    cin>>postfix;

    for(char value : postfix)
    {

        if ( (value >= 'A' and value <= 'Z') or (value >= 'a' and value <= 'z') )
        {
            cout<<"\n Enter Value for "<<value<<" : ";
            cin>>temp;
            result.push(temp);
        }


        else if ( value == '*' or value == '/' or value == '-' or value == '+')
        {
            if(result.empty())
            {
                cout<<"\n Invalid Expression.."<<endl;
                return(0);
            }
            ope2 = result.top();
            result.pop();
            if(result.empty())
            {
                cout<<"\n Invalid Expression.."<<endl;
                return(0);
            }
            ope1 = result.top();
            result.pop();
            switch (value)
            {
            case '*':
                temp = ope1 * ope2;
                result.push(temp);
                break;
            case '/':
                temp = ope1 / ope2;
                result.push(temp);
                break;
            case '+':
                temp = ope1 + ope2;
                result.push(temp);
                break;
            case '-':
                temp = ope1 - ope2;
                result.push(temp);

            }
      }
     }
     if(result.empty())
    {
        cout<<"\n Invalid Expression.."<<endl;
        return(0);
    }
    temp = result.top();    // stored answer
    result.pop();

    if(!result.empty())
    {
        cout<<"\n Invalid Expression.."<<endl;
        return(0);
    }

    cout<<"\n \n Postfix : "<<postfix;
    cout<<"\n Result : "<<temp;
    cout<<endl;

    return 0;
}








