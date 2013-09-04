/* 	
Create a class called TIME that has integer data elements for hours, minutes and seconds. 
The constructors should initialize these data elements to specified value, if given 
otherwise set it to 0. There is a reset function to reset the current time of an existing object.
Another member function should add two objects of type Time, passed as arguments. 
And there must be a conversion function which converts the values 
i.e. hrs<=24, mins<=59, sec<=59 after performing addition operation. 
At last we have display member function which displays the result in the form of e.g. 11:50:45
*/


#include<iostream>


using namespace std;



class TIME
{
      int hour;
      int min;
      int sec;
    public:  
          TIME(void
          )
          { 
            hour =0;
            min = 0;
            sec = 0;
            }
      
            TIME(int a,int b,int c)
            {
               hour = a;
               min = b;
               sec =c;
               }
      
               void reset(){
               hour =0;
               min = 0;
                sec = 0;
                }
           
           void add(TIME a ,TIME b)
           {
           sec =(a.sec + b.sec)%60;
           min =  ((a.sec+ b.sec)/60+a.min + b.min)%60;
           hour = (((a.sec+ b.sec)/60+a.min + b.min)/60+a.hour + b.hour)%24; 
          }
          
          void display()
          {
          cout <<hour<<":"<<min<<":"<<sec<<endl;
          }
      };
      
      
      
      int main()
      {
          
          TIME a1;
          TIME b1(11,12,59);
          TIME c1 = TIME(4,45,45);
          TIME d1;
          a1.display();
          b1.display();
          c1.display();
          d1.add(b1,c1);
          d1.display();
          b1.reset();
          b1.display();
          
          TIME e1 ,f1;
          int a,b,c;
          cin>>a;
          cin>>b;
          cin>>c;
          e1 = TIME(a,b,c);
          e1.display();
          
          return 0;
          
          }
