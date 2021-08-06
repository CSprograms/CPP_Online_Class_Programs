// PRACTICAL PROGRAM 14 dll - Class for creating Doubly Linked List.

#include<iostream>
#include "34a-Online-Class.cpp"

using namespace std;

class dll
{
    DLL *head;
public:
    dll()
    {
        head = nullptr;
    }
    void addFirst();
    void addLast();
    void delFirst();
    void delLast();
    void display();
};

void dll ::addFirst()
{
    DLL *temp = new DLL;
    temp->pre = nullptr;
    cout<<"Enter a value to insert : ";
    cin>>temp->data;
    temp->next = nullptr;

    if(head)
    {
        temp->next = head;
        head->pre = temp;
    }

    head = temp;
}

void dll ::addLast()
{
    if(head)        // Checking list is empty or not
    {
        DLL *temp = new DLL;
        temp->pre = nullptr;
        cout<<"Enter a value to insert : ";
        cin>>temp->data;
        temp->next = nullptr;

        DLL *trav;

        trav = head;

        while(trav->next)
            trav = trav->next;

        trav->next = temp;
        temp->pre = trav;

    }
    else
        addFirst();
}

void dll::delFirst()
{
    if(head)        // Checking list is empty or not
    {
        cout<<"Deleted List : "<< head->data<<endl;
        head = head->next;
        if(head)
            head->pre = nullptr;
    }
    else
        cout<<"Doubly Linkded List is Empty"<<endl;
}



void dll ::delLast()
{
    if(head)        // Checking list is empty or not
    {
        if(head->next)      // checking list has one element or more
        {
            DLL *trav;
            trav = head;

            while(trav->next)
                trav = trav->next;

            cout<<"Deleted List : "<< trav->data<<endl;

            trav->pre->next = nullptr;
        }
        else
            delFirst();

    }
    else
        cout<<"Doubly Linkded List is Empty"<<endl;
}

void dll::display()
{
    if(head)        // Checking list is empty or not
    {
        DLL *trav;
        trav = head;
        while(trav)
        {
            cout<<trav->data;
            trav = trav->next;
            if(trav)
                cout<<" -> ";
        }
        cout<<endl;
    }
    else
        cout<<"Doubly Linkded List is Empty"<<endl;
}