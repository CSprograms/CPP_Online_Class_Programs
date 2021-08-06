// PRACTICAL PROGRAM 13 Polynomial Addition.

#include <iostream>
using namespace std;
#define N 10

class polynomial
{
    int p[N];
public:
    polynomial()
    {
        for(int loop = N-1; loop >= 0; loop--)
            p[loop] = 0;
    }

    void set(void);             // To read Value
    void display(void);          // To display value
    polynomial operator+(polynomial ope2);

};

void polynomial :: set ()
{
    int base, power;
    char choice;
    do
   {
       cout<<"Enter the base : ";
       cin>>base;
       cout<<"Enter the power : ";
       cin>>power;

       p[power] += base;

       cout<<"Do you want to continue (y/n) : ";
       cin>>choice;
   }while(choice=='y');
}

polynomial polynomial :: operator+(polynomial ope2) // object1 implicit & object2 as argument
{
    polynomial temp;
    for(int loop = N-1; loop >= 0; loop--)
        temp.p[loop] = p[loop] + ope2.p[loop];
    return temp;
}

void polynomial :: display()
{
    bool flag = false;
    for(int loop = N-1; loop >= 0; loop--)
    {
        if (p[loop])
        {
            cout << p[loop] ;
            if(loop)
                cout<< " x^" << loop;
            flag = true;
        }
        if (flag && loop && p[loop - 1] > 0)    // loop - to check last element;;   p[loop-1] > 0- to check next element is positive
            cout << " + ";
    }
}

int main()
{
    polynomial object1, object2, object3;

   cout<<"Enter value for Equation 1..\n";
   object1.set();

   cout<<"Enter value for Equation 2..\n";
   object2.set();

   object3 = object1 + object2;     // Binary operator overloading.

   object3.display();

return 0;
}
