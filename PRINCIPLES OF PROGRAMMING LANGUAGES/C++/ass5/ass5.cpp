#include<iostream>

using namespace std;

class ABC {
      
      int iarr[20];
      char charr[20];
      public : 
      void operator <<(int a)
      {   int i,j;
          int b[20];
          char c[20];
          for(i=0;i<a;i++)
          {
             b[i] = iarr[i];  
             c[i] = charr[i];           
          } 
          for (i=0;i<20-a;i++){
          iarr[i] = iarr[i+a];
          charr[i] = charr[i+a];
          }
          for(i=20-a,j=0;i<20;i++,j++)
          { 
          iarr[i] =  b[j];
          charr[i] = c[j];        
          }
      }
      
      void operator >>(int a)
      {   int i,j;
          int b[20];
          char c[20];
          
          for(i=0;i<20;i++)
          {
             b[i] = iarr[i];  
             c[i] = charr[i];  
                    
          } 
          
          for(i=0; i <20; i++)
          {
               iarr[i+a] =b[i];       
               charr[i+a]=c[i];  
    
          }
          for(i=0;i<a;i++)
          {iarr[a-i-1] = b[19-i];
           charr[a-i-1] = c[19-i];              }
           
         
      }
      
      void display()
      {  int i;
         for(i=0;i<20;i++)
         {cout  <<iarr[i]<<" ";
         } 
         cout << endl; 
         for(i=0;i<20;i++)
         {cout  <<charr[i]<<" ";
         }  
      }
      
      ABC (int w)
      {  
      int i;
      if(w ==1 )
      {
      for(i=0;i<20;i++)
      {
      iarr[i]=i; 
      charr[i] = 65 + i;         
      } 
      }   
      }
      
      };
int main()

{
  ABC a11(1);
  a11.display();
  cout<< endl<<endl;
  a11 << 2;
 a11.display();

  cout<< endl<<endl;
  a11 >> 3;
  a11.display();
  
  return 0;  
}
