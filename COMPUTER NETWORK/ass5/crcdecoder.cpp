#include<iostream>
#include<conio.h>

using namespace std;


int* retrieve_dw(int *dw,int *dw1)
{
	int gbits[4]={1, 0, 1, 1}, temp[7]={0, 0, 0, 0, 0, 0, 0}, i, j;

	for(i=0; i<7; i++)
    temp[i]=dw[i];
    
    for(i=0; i<4; i++)
    gbits[i]=dw1[i];

     for(i=0; i<4; i++)
     {
	      int ttemp=temp[i];
	      for(j=0; j<4; j++)
	      {
		       if(ttemp)
				  temp[i+j]^=gbits[j];
		       else
				  temp[i+j]^=0;
	      }
     }

     temp[0]=2;

     if(!temp[4] && !temp[5] && !temp[6])
	return	dw;
     else
	return temp;
}

int main()
{
     int choice, i, j, *dw=new int[4], *cw=new int[7],*cw1=new int[4];
    
			                  cout<<"\nEnter the code-word:\n";
			                  for(i=0; i<7; i++)
				              cin>>cw[i];
			                  cout<<"\nCode-word:\t";
			                  for(i=0; i<7; i++)
			                  cout<<cw[i];
			                  
			                  cout<<"\nEnter the divisor:\n";
			                  for(i=0; i<4; i++)
			                  cin>>cw1[i];
			                  cout<<"\ndivisor :\t";
			                  for(i=0; i<4; i++)
                              cout<<cw1[i];
                              dw=retrieve_dw(cw,cw1);
                              
			                  if(dw[0]==2)
				                       cout<<"\nCode-word is invalid.";
                              else
			                  {
                                       cout<<"\nData-word:\t";
				                       for(i=0; i<4; i++)
					                   cout<<dw[i];
                              }
			         
   getch();
      

return 0;
}
