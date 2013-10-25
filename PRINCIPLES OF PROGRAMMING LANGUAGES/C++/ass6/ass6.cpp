/*Create a class Int to Overload all five integer arithmetic operators (+, -, *, / and %).
So that they operate on object of type Int. 
If the result of any such arithmetic operation exceeds the normal range of int's – 
from -32,768 to 32,767 – have the operator print a warning and terminate the program.
 Write a program to test this class.
 */
 #include<iostream>
 #include<conio.h>
 using namespace std;
 class Int
 { int n;
   public:
      Int(int x=0)
      { n=x;
      }
    Int operator +(Int b)
    {  Int t;
       t.n=n+b.n;

        return t;
    }  
        Int operator -(Int b)
    {  Int t;
       t.n=n-b.n;

        return t;
    }  
        Int operator *(Int b)
    {  Int t;
       t.n=n*b.n;
        return t;
    }  
        Int operator /(Int b)
    {  Int t;
       t.n=n/b.n;
        return t;
    }  
    Int operator %(Int b)
    {  Int t;
       t.n=n%b.n;
        return t;
    }  
    void show()
    { if(n<-32768||n>31767)
        { cout<<"result out of range";
        //getch();
        exit(0);
        
        }
        else
         cout<<n;
    }
};
int main()
{
    Int a(-600);
    Int b(40);
    Int c;
    cout<<"\n a=";
    a.show();
    cout<<"  and b = ";
    b.show();
    cout<<"\n a+b = ";
    c=a+b;
    c.show();
    cout<<"\n a-b = ";
    c=a-b;
    c.show();
    cout<<"\n a*b = ";
    c=a*b;
    c.show();
    cout<<"\n a/b = ";
    c=a/b;
    c.show();
    cout<<"\n a%b = ";
    c=a%b;
    c.show();
    getch();
    return 0;
}    
