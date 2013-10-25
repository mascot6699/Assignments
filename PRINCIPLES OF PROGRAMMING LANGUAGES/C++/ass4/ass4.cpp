//Write a program to overload function for (pre increment) ++ operator.

#include<iostream>
using namespace std;

class NU{
      int a; 
      public :
             NU()
             {a=12;}
             friend NU operator++(NU &x)
             {
                  x.a = x.a+1;
                  return x;
             }
             void display()
             {
                  cout << a <<endl;
                  
             }
             friend NU operator--(NU &x);
      };
 NU  operator--(NU &x)
{x.a = x.a-1;
     return x;
     }

int main()
{
    NU a1;
    a1.display();
    //a1++;
    a1.display();
    ++a1;
    a1.display();
    //a1--;
    --a1;
    a1.display();
    
    
    
    return(0);
    
}
