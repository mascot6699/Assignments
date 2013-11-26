/*Create a Matrix class with the concept dynamic resource (memory) allocation. 
Matrix Class contains no. of member functions to perform the task of 
:- get matrix, show matrix, add matrix, subtract matrix and compare matrix elements.
 At the end use destructor to destroy this dynamically allocated memory.
*/

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class matrix
{
      public:
             int **p,**q,r,c;
             matrix(int x,int y)
             {
	          r=x;c=y;
              p=new int *[r];
	          for(int i=0;i<r;i++)
	          p[i]=new int[c];
	          //called
            }
            ~matrix()
             {
              
             }
             void getmatrix();
             void showmatrix();
             void addmatrix(matrix,matrix);
             void submatrix(matrix,matrix);
             void compmatrix(matrix,matrix);
             void reset();
             
};

void matrix::getmatrix()
{
   int i,j;  
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
     cin>>p[i][j];
    }          
   }     
}
void matrix::showmatrix()
{
   int i,j;  
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
     cout<<"  "<<p[i][j];
    }
    cout<<endl;          
   }
}
void matrix::addmatrix(matrix x,matrix y)
{
   int i,j;  
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
     p[i][j]=x.p[i][j]+y.p[i][j];
    }          
   }
}
void matrix::submatrix(matrix x,matrix y)
{
   int i,j;  
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
     p[i][j]=x.p[i][j]-y.p[i][j];
    }          
   }
}
void matrix::compmatrix(matrix x,matrix y)
{     
   int i,j,count=0;  
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
     if(x.p[i][j]==y.p[i][j])
     count++;
    }          
   }
   if(count==(r*c))
   cout<<"\nGiven Matrics are Equal .\n";
   else
   cout<<"\nGiven Matrics are Not Equal!\n";  
}

int main()
{int ch;

    int r,c;
	int i,j,value;
	cout<<"Enter size of matrix \n";
	cin>>r>>c;
	matrix A(r,c);
	matrix B(r,c);
	matrix C(r,c);
	cout<<"for first"<<endl;
	A.getmatrix();
	cout<<"for second matrix\n";
	B.getmatrix();
	
        
             cout<<"showing A"<<endl;
             A.showmatrix();
             cout<<"showing B"<<endl;
             B.showmatrix();
             
		    cout<<"adding A and B"<<endl;
			C.addmatrix(A,B);
			C.showmatrix();
			
			cout<<"subtracting A and B"<<endl;
			C.submatrix(A,B);
            C.showmatrix();
			
 
            cout<<"now comparing"<<endl;
            C.compmatrix(A,B);
			   	
getch();
	return 0;

}
