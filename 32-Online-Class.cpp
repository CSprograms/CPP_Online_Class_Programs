// QUEUE - Practical 10 FIFO : First In First Out
#include <iostream>
using namespace std;
#define SIZE 5
class qu
{
    int Q[SIZE];
    int FRONT, REAR;
public:
    qu();
    void enQueue();               //  Insert
    void deQueue();               // Delete
    void display();
    bool IsFull();
    bool IsEmpty();
    void position()         // used for understanding.
    {
        cout<<"Front : "<<FRONT<<endl;
        cout<<"Rear : "<<REAR<<endl;
    }
};

qu :: qu()
{
    FRONT = 0;
    REAR = -1;
    position();
}
bool qu :: IsEmpty()
{
    if (FRONT > REAR)
    {
        FRONT = 0;
        REAR = -1;
        return true;
    }
    else
    {
        return false;
    }
}
bool qu :: IsFull()
{
    if (REAR - FRONT + 1 == SIZE)
        return true;
    else
        return false;
}

void qu :: enQueue()
{
    if (IsFull())
    {
        cout<<"Queue is Full."<<endl;
    }
    else
    {
        cout<<"Enter a value to push : ";
        cin>>Q[++REAR];         // pre-increment
    }
    position();
}
void qu :: deQueue()
{
    if(IsEmpty())
    {
        cout<<"Queue is Empty."<<endl;
    }
    else
    {
        cout<<"Deleted Element : "<<Q[FRONT++]<<endl;
         if(!IsEmpty())
        {
            FRONT--;
            for(int loop = FRONT; loop < REAR; loop++)
                Q[loop] = Q[loop+1];
            REAR--;
        }
    }
    position();
}
void qu :: display()
{
    if(IsEmpty())
    {
        cout<<"Queue is Empty."<<endl;
    }
    else
    {
        cout<<"Queue Elements : ";
        cout<<endl;                                                                      // used for understanding.
        for (int loop = FRONT; loop <= REAR; ++loop)
            cout<<Q[loop]<<"\t";
            cout<<endl;                                                                     // used for understanding.
        for (int loop = FRONT; loop <= REAR; ++loop)         // used for understanding. TO PRINT ARRAY INDEX
            cout<<"Q["<<loop<<"]"<<"\t";                                // used for understanding.
    }
    cout<<endl;
    position();
}

int main()
{
    qu object;
    qu *ptr = &object;
    int choice;

    do
    {
        cout<<"1 - ENQ"<<endl;
        cout<<"2 - DEQ"<<endl;
        cout<<"3 - DISPLAY"<<endl;
        cout<<"4 - QUIT"<<endl;

        cout<<"Enter a choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            ptr->enQueue();
            break;
        case 2:
            ptr->deQueue();
            break;
        case 3:
            ptr->display();
            break;
        case 4:
            return 0;
        default:
            cout<<"Invalid input."<<endl;
        }

    }while (true);     // while(choice!=4) infinite
}
