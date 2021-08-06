// STACK - Practical 7 LIFO : Last In First Out
#include <iostream>
using namespace std;
#define SIZE 5
class stack
{
    int S[SIZE];
    int TOP;
public:
    stack();
    void push();
    void pop();
    void display();
    bool IsFull();
    bool IsEmpty();
};

stack :: stack()
{
    TOP = -1;
}
bool stack :: IsEmpty()
{
    if ( TOP == -1)
        return true;
    else
        return false;
}
bool stack :: IsFull()
{
    if (TOP == SIZE - 1)
        return true;
    else
        return false;
}

void stack :: push()
{
    if (IsFull())
    {
        cout<<"Stack is Full."<<endl;
    }
    else
    {
        cout<<"Enter a value to push : ";           //   int temp;
        cin>>S[++TOP];                              //   cout<<"Enter a value to push : ";
                                                    //   cin>>temp;
                                                    //   S[++top] = temp;
    }
}
void stack :: pop()
{
    if(IsEmpty())
    {
        cout<<"Stack is Empty."<<endl;
    }
    else
    {
        cout<<"Popped Element : "<<"S["<<TOP<<"] : ";
        cout<<S[TOP--]<<endl;
    }
}
void stack :: display()
{
    if(IsEmpty())
    {
        cout<<"Stack is Empty."<<endl;
    }
    else
    {
        cout<<"Stack Elements : "<<endl;
        for (int loop = TOP; loop > -1; --loop)
            cout<<"S["<<loop<<"] : "<<S[loop]<<endl;
    }
}

int main()
{
    stack object;
    int choice;

    do
    {
        cout<<"1 - PUSH"<<endl;
        cout<<"2 - POP"<<endl;
        cout<<"3 - DISPLAY"<<endl;
        cout<<"4 - QUIT"<<endl;

        cout<<"Enter a choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            object.push();
            break;
        case 2:
            object.pop();
            break;
        case 3:
            object.display();
            break;
        case 4:
            return 0;       // loop and program terminates.
        default:
            cout<<"Invalid input."<<endl;
        }
    }while (true);     // while(choice!=4) infinite
}
