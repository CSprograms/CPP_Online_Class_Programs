// PRACTICAL PROGRAM 14 DLL - Driver Code
#include "34b-Online-Class.cpp"


int main()
{
    dll object;
    int choice;

    do
    {
        cout<<"1 - Insert @ HEAD"<<endl;
        cout<<"2 - Insert @ TAIL"<<endl;
        cout<<"3 - Delete @ HEAD"<<endl;
        cout<<"4 - Delete @ TAIL"<<endl;
        cout<<"5 - Display"<<endl;
        cout<<"6 - Quit"<<endl;

        cout<<"Enter a choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            object.addFirst();
            break;
        case 2:
            object.addLast();
            break;
        case 3:
            object.delFirst();
            break;
        case 4:
            object.delLast();
            break;
        case 5:
            object.display();
            break;
        case 6:
            return 0;
        default:
            cout<<"Invalid input."<<endl;
        }

    }while (true);     // while(choice!=4) infinite
}
